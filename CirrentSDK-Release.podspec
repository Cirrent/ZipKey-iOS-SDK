
Pod::Spec.new do |s|

  s.name         = "CirrentSDK-Release"
  s.version      = "1.3.1"
  s.summary      = "The SDK streamlines the steps required to onboard a ZipKey-enabled device onto the user's private network"
  s.homepage     = "https://cirrent.com/"
  s.license      = { :type => "Copyright", :text => "Copyright (c) 2020 Cirrent. All rights reserved." }
  s.author = 'Cirrent'
  s.platform     = :ios, "9.0"
  s.source       = { :path => '.' }
s.vendored_frameworks = 'cirrentsdk/release/CirrentSDK.framework'
s.module_name = 'CirrentSDK'

s.dependency 'Alamofire', '~> 4.8.1'
s.dependency 'RxBluetoothKit', '= 4.0.2'

end
