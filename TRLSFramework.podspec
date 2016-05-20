Pod::Spec.new do |s|
  s.name         = "TRLSFramework"
  s.version      = "0.0.2"
  s.summary      = "TRLS Framework"
  s.homepage     = "https://github.com/apontador/trls-library-ios"
  s.license      = { 
    :type => 'Copyright',
    :file => 'LICENSE'}
  s.author       = 'Maplink'
  s.source       = { :git => "https://github.com/apontador/TRLS-IOS-EXAMPLE.git", :tag => s.version.to_s }
  s.platform     = :ios, '8.0'
  s.source_files = ['TRLS/Debug/TRLSFramework.framework/Headers/', 'TRLS/Release/TRLSFramework.framework/Headers/']
  s.requires_arc = true
  #s.ios.vendored_frameworks = 'TRLSFramework.framework'
  s.xcconfig = {'FRAMEWORK_SEARCH_PATHS' => '$(PODS_ROOT)/TRLSFramework/$(CONFIGURATION)'}        
  #s.preserve_paths = 'TRLSFramework.framework'
end
