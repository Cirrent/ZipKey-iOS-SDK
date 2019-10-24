Pod::Spec.new do |s|

s.name         = "CirrentSDK-Debug"
s.version      = "1.2.33"
s.summary      = "The SDK streamlines the steps required to onboard a ZipKey-enabled device onto the user's private network"
s.homepage     = "https://cirrent.com/"
s.license      = { :type => "Copyright", :text => "Copyright (c) 2019 Cirrent. All rights reserved." }
s.author = 'Cirrent'
s.source       = { :path => '.' }
s.platform     = :ios, "9.0"
s.vendored_frameworks = 'cirrentsdk/debug/CirrentSDK.framework'
s.module_name = 'CirrentSDK'

s.dependency 'Alamofire', '~> 4.8.1'
s.dependency 'EVReflection', '= 5.10.0'
s.dependency 'RxBluetoothKit', '= 4.0.2'

end