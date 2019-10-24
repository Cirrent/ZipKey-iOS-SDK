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

Please note that "debug" versions suppose to work on real devices AND the emulator, and it's not intended to be sent to the AppStore. 
"Release" version works only with real devices and doesn't contain simulator architectures. Only release version can be set to the AppStore.

So please do not forget to change DEBUG_CONFIGURATION_NAME & RELEASE_CONFIGURATION_NAME to those that are used in your project!

## CHANGELOG
### 1.2.33
#### Added
- `boolean isProviderKnownNetwork` and `String jwt` to the `DeviceInfoCallback.onDevicesFound(List<Device> nearbyDevices)` method.
