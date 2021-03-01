
Pod::Spec.new do |s|

  s.name         = "CirrentSDK-Release"
  s.version      = "1.5.1"
  s.summary      = "The SDK streamlines the steps required to onboard a Wi-Fi enabled device onto the user's private network"
  s.homepage     = "https://cirrent.com/"
  s.license      = { :type => "Copyright", :text => "Copyright (c) 2021 Cirrent. All rights reserved." }
  s.author = 'Cirrent'
  s.platform     = :ios, "9.0"
  s.source       = { :path => '.' }
s.vendored_frameworks = 'cirrentsdk/release/CirrentSDK.framework'
s.module_name = 'CirrentSDK'

s.dependency 'Alamofire', '~> 4.9.1'
s.dependency 'RxBluetoothKit', '= 6.0.0'

end
