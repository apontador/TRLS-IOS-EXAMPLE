Pod::Spec.new do |s|
  s.name         = "TRLSFramework"
  s.version      = "2.0.3"
  s.summary      = "TRLS Framework"
  s.homepage     = "https://github.com/apontador/trls-library-ios"
  s.license      = { 
    :type => 'Copyright',
    :file => 'LICENSE'}
  s.author       = 'Maplink'
  s.source       = { :git => "https://github.com/apontador/TRLS-IOS-EXAMPLE.git", :tag => s.version.to_s }
  s.platform     = :ios, '8.0'
  s.source_files = 'TRLSFramework.framework/Versions/A/Headers/*.h'
  s.requires_arc = true
  s.ios.vendored_frameworks = 'TRLSFramework.framework'
  s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '$(inherited)' }
  s.preserve_paths = 'TRLSFramework.framework'
end