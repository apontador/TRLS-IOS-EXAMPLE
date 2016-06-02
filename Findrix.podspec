Pod::Spec.new do |s|
  s.name         = "Findrix"
  s.version      = "2.2"
  s.summary      = "Findrix Framework"
  s.homepage     = "https://github.com/apontador/findrix-sdk-doc-ios"
  s.license      = { 
    :type => 'Copyright',
    :file => 'LICENSE'}
  s.author       = 'Maplink'
  s.source       = { :git => "https://github.com/apontador/findrix-sdk-doc-ios.git", :tag => s.version.to_s }
  s.platform     = :ios, '8.0'
  s.source_files = 'Findrix.framework/Versions/A/Headers/*.h'
  s.requires_arc = true
  s.ios.vendored_frameworks = 'Findrix.framework'
  s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '$(inherited)' }
  s.preserve_paths = 'Findrix.framework'
end