Pod::Spec.new do |s|

  s.name         = "HWEventBus"
  s.version      = "1.0.0"
  s.summary      = "HWEventBus"
  s.homepage     = "https://github.com/wowbby/HWEventBus"
  s.ios.deployment_target = '8.0'
  s.license      = "MIT"
  s.author             = {
                          "wowbby" => "zhengzx@haierubic.com.com"
 }
  s.source        = { :git => "https://github.com/wowbby/HWEventBus.git", :tag => s.version.to_s }
  s.source_files  = "HWEventBus/*.{h,m}"
  s.platform      = :ios, '8.0'
  s.requires_arc  = true
end
