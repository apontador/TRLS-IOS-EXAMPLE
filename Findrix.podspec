Pod::Spec.new do |s|
  s.name         = "Findrix"
  s.version      = "3.0.8"
  s.summary      = "Findrix Framework"
  s.homepage     = "https://github.com/apontador/findrix-sdk-doc-ios"
  s.license      = { :type => 'Apache License, Version 2.0', :text => <<-LICENSE
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
    LICENSE
  }
  s.author       = 'Maplink'
  s.source       = { :git => "https://github.com/apontador/findrix-sdk-doc-ios.git", :tag => s.version.to_s }
  s.platform     = :ios, '8.0'
  s.source_files = 'Findrix.framework/Versions/A/Headers/*.h'
  s.requires_arc = true
  s.ios.vendored_frameworks = 'Findrix.framework'
  s.ios.framework = 'CoreLocation', 'AdSupport', 'SystemConfiguration', 'CoreTelephony'
  s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '$(inherited)' }
  s.preserve_paths = 'Findrix.framework'
end
