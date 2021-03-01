## Installation
Add to the Podfile:
```
pod 'CirrentSDK-Debug', :configuration => 'DEBUG_CONFIGURATION_NAME', :git => 'https://github.com/Cirrent/ZipKey-iOS-SDK.git'
pod 'CirrentSDK-Release', :configuration => 'RELEASE_CONFIGURATION_NAME', :git => 'https://github.com/Cirrent/ZipKey-iOS-SDK.git'
```
If you use XCode 10.1:
```
pod 'CirrentSDK-Debug_xcode10_1', :configuration => 'DEBUG_CONFIGURATION_NAME', :git => 'https://github.com/Cirrent/ZipKey-iOS-SDK.git'
pod 'CirrentSDK-Release_xcode10_1', :configuration => 'RELEASE_CONFIGURATION_NAME', :git => 'https://github.com/Cirrent/ZipKey-iOS-SDK.git'
```

Please note that "Debug" versions suppose to work on real devices AND the emulator, and it's not intended to be sent to the AppStore.
"Release" version works only with real devices and doesn't contain simulator architectures. Only "Release" version can be sent to the AppStore.

So please do not forget to change DEBUG_CONFIGURATION_NAME & RELEASE_CONFIGURATION_NAME to those that are used in your project!

## CHANGELOG
### 1.5.1
#### Changed
- API has been simplified:  `MobileAppIntelligence.initialize(analyticsToken: String, delegate: MAICallback)` signature has been changed to  `MobileAppIntelligence.initialize(token: String, onTokenInvalid: @escaping (_ retrier: Retrier) -> (), onError: ((_ error: MAIError) -> ())? = nil)`;  
other functions don't require a delegate as a parameter.
- BLE & Soft AP onboarding protocols have been changed;
- ZipKey onboarding type has been completely removed;
- improved stability.
#### Fixed
- fixed a bug where the app gets stuck during BLE onboarding if the CA doesn't provide a response
### 1.3.7
#### Fixed
- fixed a bug where MAI doesn't print all required logs when debug mode is on.
#### Added
- an ability to restart "init" data collecting if location permission is granted.
### 1.3.5
#### Added
- `MobileAppIntelligence.setDebugMode(enabled: Bool)` . This method gives an ability to see more log entries.
### 1.3.4
#### Fixed
- a bug where MAI requires initialization even after it has been performed.
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
#### Added
- account id checking logic.
#### Fixed
- disconnection issues during Soft AP on-boarding process.
### 1.2.36
#### Fixed
- class name duplication issues.
### 1.2.35
#### Added
- optional `GatherEnvironmentCallback` delegate with a `onEnvironmentGathered(isEnvironmentCompletelyCollected: Bool)` function to the `CirrentService.gatherEnvironment()`.
#### Improved
- `CirrentService.findDevice()`. The process of finding devices is now faster.
### 1.2.34
#### Fixed
- a bug when Xcode 11.2.1 couldn't load the SDK.
### 1.2.33
#### Added
- `boolean isProviderKnownNetwork` and `String jwt` to the `DeviceInfoCallback.onDevicesFound(List<Device> nearbyDevices)` method.
