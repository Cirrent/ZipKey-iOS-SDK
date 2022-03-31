# CIRRENT™ Mobile App SDK

CIRRENT™ App SDK contains CIRRENT™ Wi-Fi Onboarding and [CIRRENT™ Mobile App Intelligence solutions](https://www.infineon.com/cms/en/design-support/service/cloud/cirrent-product-analytics/cirrent-mobile-app-intelligence-mai/):
- CIRRENT™ Wi-Fi Onboarding helps to onboard a device onto the user's private Wi-Fi network via Soft AP or BLE;
- CIRRENT™ Mobile App Intelligence (MAI) allows you to identify Wi-Fi onboarding problems by looking at broad trends from your entire fleet and correlating performance metrics and onboarding issues across multiple variables (router, ISP, fw/hw version, or your own custom parameters).

## Installation
Add to the Podfile:
```
pod 'CirrentSDK', :git => 'https://github.com/Cirrent/ZipKey-iOS-SDK.git'
```

## Using CIRRENT™ Mobile App Intelligence (MAI)

First, you need to *initialize* the MAI using the pre-generated *Analytics token* and `initialize(token: String, onTokenInvalid: @escaping (_ retrier: Retrier) -> (), onError: ((_ error: MAIError) -> ())? = nil)` function.

### Token generation

- Go to [CIRRENT™ Console](https://console.cirrent.com/api-keys) and create *the App API Key and Secret* clicking **"Create API Key"**. Use the **"app"** Key Type. ***Please note:*** your API key consists of two parts: *{accountID}_{key}*.
- Generate the token using the MAI:
```swift
MobileAppIntelligence.createToken(expiresIn: 900, accountId: "{accountId}", appId: "{appId}", appKey: "{apiKey}", appSecret: "{apiSecret}")

```

### Initialization

Initialization starts the SDK. Captures and sends the phone information (phone model, OS) and the Wi-Fi information used to identify a router, ISP, SSID for the network, etc.
```swift
MobileAppIntelligence.initialize(token: "{analyticsToken}", onTokenInvalid: { retrier in
            retrier.retry(token: "{re-generated valid token}")
        }, onError: { error in
            let errorType: ErrorType = error.errorType
            switch errorType {
            case .request_failed,
                 .reserved_step_name_used,
                 .initialization_required,
                 .init_data_collecting_is_active,
                 .start_onboarding_required,
                 .onboarding_type_required,
                 .lack_of_location_permission,
                 .end_onboarding_required: break
            }
        })

```  
***Please note:*** the MAI must be initialized before calling any other functions. Otherwise, `onError: (MAIError)` will be called.

## Three simple steps to get more info about users onboarding experience

*These three steps allow the app developers to understand how many onboarding attempts succeeded and what is the duration that a user spent to onboard a device to Wi-Fi. This allows developers to also see what was the last step that the user was on before abandoning in case of unsuccessful onboarding attempts.*

When the MAI is initialized, you can start capturing data related to particular onboarding, following these three simple steps: 

#### 1. Start Onboarding

```swift
MobileAppIntelligence.startOnboarding(type: .ble)

```
This function tells the CIRRENT™ Cloud that onboarding has been started. Also creates a unique *OnboardingID* and stores it for subsequent calls (until *endOnboarding()* function is called).

#### 2. Identify key points of your onboarding process

And enrich them by adding:
```swift
MobileAppIntelligence.enterStep(
        StepData.create(
                result: .success,
                stepName: "{this_step_name}",
                reason: "{reason_why_it_happened}"
        ).setDebugInfo(
                ["key1": "value1", "key2": "value2"] //optional debug info
        )
)

```

It will tell the CIRRENT™ Cloud what is happening during your onboarding process. CIRRENT™ MAI captures all steps and their duration. All this information allows developers to understand the root cause of the issue.

#### 3. End Onboarding

```swift
MobileAppIntelligence.endOnboarding()
        //OR
        //if onboarding wasn't successful.
MobileAppIntelligence.endOnboarding(
        EndData.create(failureReason: "{failure_reason}")
                .setDebugInfo(
                        ["key1": "error1"] //optional debug info
                )
)

```

It tells the CIRRENT™ Cloud that onboarding has been ended. Close out the onboarding id.

## Using CIRRENT™ Wi-Fi Onboarding

In order to on-board your device via Soft AP or BLE you need to go through the following steps:

### 1. Connect

#### BLE:

```swift
BluetoothService
            .shared
            .connectToDeviceViaBluetooth(
                blePrefix: bluetoothDeviceName,
                delegate: BluetoothDeviceConnectionCallback
)
        
extension Connector: BluetoothDeviceConnectionCallback {
    func onError(error: BluetoothDeviceConnectionError) {
        switch error {
        case .operationTimeLimitExceeded,
             .unknown,
             .unableToWriteData,
             .unableToDiscoverCharacteristics,
             .unableToDiscoverServices,
             .unableToReadResponse,
             .unableToConnect,
             .failedToFindDevice,
             .bluetoothIsNotReady: break
        }
    }

    func onDeviceConnectedSuccessfully() {

    }
}

```

#### Soft AP:

```swift
SoftApService
            .shared
            .connectToDeviceViaSoftAp(
                "{deviceSoftApSsid}",
                SoftApDeviceConnectionCallback
        )
        
extension Connector: SoftApDeviceConnectionCallback {
    func onDeviceConnectedSuccessfully() {
        
    }

    func onConnectionFailed() {
        
    }
}
```

### 2. Get Device info and the list of candidate Wi-Fi networks

#### BLE:

```swift
BluetoothService.shared.getDeviceInfoViaBluetooth(delegate: BluetoothDeviceInfoCallback)

extension DeviceDataReceiver: BluetoothDeviceInfoCallback {
    func onError(error: BluetoothDeviceInfoError) {
        switch error {
        case .operationTimeLimitExceeded,
             .unknown,
             .unableToWriteData,
             .unableToDiscoverCharacteristics,
             .unableToDiscoverServices,
             .unableToReadResponse,
             .invalidScdPublicKeyReceived,
             .connectionIsNotEstablished: break
        }
    }

    func onInfoReceived(deviceInfo: DeviceInfo, candidateNetworks: [WiFiNetwork]) {

    }
}
```

#### Soft AP:

```swift
SoftApService
            .shared
            .getDeviceInfoViaSoftAp(
                delegate: SoftApDeviceInfoCallback,
                exceptionHandler: { code, message in
                    // if a network exception occurred talking to the server or when an unexpected exception occurred creating the request or processing the response.
                }
            )
            
extension DeviceDataReceiver: SoftApDeviceInfoCallback {
    public func onDeviceInfoReceived(deviceInfo: DeviceInfo, candidateNetworks: [WiFiNetwork]) {

    }
}
```

***Please note:*** Among other things, the `DeviceInfo` object contains the `scdPublicKey` value required for the pre-shared key encryption.

### 3. Send private Wi-Fi network crededentials and start checking joining status

#### BLE:

```swift
BluetoothService
            .shared
            .putPrivateCredentialsViaBluetooth(
                isHiddenNetwork: false, // "true" if you want to connect your device to the hidden network.
                priority: 255, // Network priority. Value should be between 150 and 255.
                preSharedKey: "{pre-shared key}",
                selectedNetwork: selectedNetwork, // WiFiNetwork object (desired network from the candidate networks list)
                delegate: BluetoothCredentialsSenderCallback
        )
        
extension CredentialsSender: BluetoothCredentialsSenderCallback {
    public func onError(error: BluetoothCredsSenderError) {
        switch error {
        case .operationTimeLimitExceeded, 
             .unknown,
             .unableToWriteData,
             .unableToDiscoverCharacteristics,
             .unableToDiscoverServices,
             .unableToReadResponse,
             .incorrectPriorityValueUsed, 
             .invalidScdPublicKeyUsed,
             .connectionIsNotEstablished:
            break
        }
    }

    func onCredentialsSent() {
        //credentials were successfully sent to the device
    }

    func onConnectedToPrivateNetwork() {
        //device successfully connected to the private network
    }

    func onNetworkJoiningFailed(errorMessage: String) {
        
    }
}
```

#### Soft AP:

```swift
SoftApService
            .shared
            .putPrivateCredentialsViaSoftAp(
                    isHiddenNetwork: false, // "true" if you want to connect your device to the hidden network.
                    priority: 255, // Network priority. Value should be between 150 and 255.
                    softApSsid: "{deviceSoftApSsid}", // required to rejoin the previous network when the softAP network goes away
                    selectedNetwork: selectedNetwork, // WiFiNetwork object (desired network from the candidate networks list)
                    preSharedKey: "{pre-shared key}",
                    delegate: SoftApCredentialsSenderCallback,
                    exceptionHandler: { code, message in
                        // if a network exception occurred talking to the server or when an unexpected exception occurred creating the request or processing the response.
                    }
            )
            
extension CredentialsSender: SoftApCredentialsSenderCallback {
    public func onError(error: SoftApCredsSenderError) {
        switch error {
        case .invalidScdPublicKeyUsed,
             .incorrectPriorityValueUsed,
             .failedToReturnToPrivateNetwork: break
        }
    }

    func onCredentialsSent() {
        
    }

    func onReturnedToNetworkWithInternet() {
         
    }

    func onNetworkJoiningFailed() {
         
    }
}
```

## CHANGELOG
### 1.5.11
- - bug fixes and improvements.
### 1.5.9
- CIRRENT™ Wi-Fi Onboarding API was simplified; 
- bug fixes and improvements.
### 1.5.5
- bug fixes and improvements.
### 1.5.3
#### Changed
- now to report step details you need to call `MobileAppIntelligence.enterStep(StepData)` method (you can create `StepData` object using `StepData.create()` method);
- now to report end onboarding details you need to call `MobileAppIntelligence.endOnboarding(EndData)` method (you can create `EndData` object using `EndData.create()` method);
- steps "outside" onboarding were allowed (now you can use `MobileAppIntelligence.enterStep(StepData)` right after MAI was initialized).
#### Added
- added an ability to report an onboarding type along with the `startOnboarding(OnboardingType)` method;
- added an ability to add debug info to `StepData` and `EndData` objects using `StepData.addDebugInfo([:])` or `EndData.addDebugInfo([:])` methods.
### 1.5.1
#### Changed
- API has been simplified:  `MobileAppIntelligence.initialize(analyticsToken: String, delegate: MAICallback)` signature has been changed to  `MobileAppIntelligence.initialize(token: String, onTokenInvalid: @escaping (_ retrier: Retrier) -> (), onError: ((_ error: MAIError) -> ())? = nil)`;  
other functions don't require a delegate as a parameter.
- BLE & Soft AP onboarding protocols have been changed;
- ZipKey onboarding type has been completely removed;
- improved stability.
### 1.3.8
- bug fixes and improvements;
### 1.3.7
- bug fixes and improvements;
#### Added
- an ability to restart "init" data collecting if location permission is granted.
### 1.3.5
#### Added
- `MobileAppIntelligence.setDebugMode(enabled: Bool)` . This method gives an ability to see more log entries.
### 1.3.4
- bug fixes and improvements;
### 1.3.3
#### Added
- `MobileAppIntelligence.createToken()` function which allows to generate ANALYTICS token;
- an ability to set onboarding session timeout (default value = 15 mins);
#### Changed
- Mobile Onboarding Analytics renamed to Mobile App Intelligence;
### 1.3.1
#### Added
- Mobile Onboarding Analytics;
### 1.2.38
- added account id checking logic.
- bug fixes and improvements;
### 1.2.36
- bug fixes and improvements;
### 1.2.35
#### Added
- optional `GatherEnvironmentCallback` delegate with a `onEnvironmentGathered(isEnvironmentCompletelyCollected: Bool)` function to the `CirrentService.gatherEnvironment()`.
#### Improved
- `CirrentService.findDevice()`. The process of finding devices is now faster.
### 1.2.34
- bug fixes and improvements;
### 1.2.33
#### Added
- `boolean isProviderKnownNetwork` and `String jwt` to the `DeviceInfoCallback.onDevicesFound(List<Device> nearbyDevices)` method.
