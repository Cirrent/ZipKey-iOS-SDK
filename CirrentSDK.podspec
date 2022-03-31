
Pod::Spec.new do |s|

  s.name         = "CirrentSDK"
  s.version      = "1.5.11"
  s.summary      = "The SDK streamlines the steps required to onboard a Wi-Fi enabled device onto the user's private network"
  s.homepage     = "https://cirrent.com/"
  s.license      = { :type => "Copyright", :text => "Copyright (c) 2022 Cirrent. All rights reserved." }
  s.author = 'Cirrent'
  s.platform = :ios
  s.ios.deployment_target  = '11.0'
  s.source       = { :path => '.' }
  s.vendored_frameworks = 'cirrentsdk/CirrentSDK.xcframework'
  s.module_name = 'CirrentSDK'

end
