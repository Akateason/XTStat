Pod::Spec.new do |s|

  s.name         = "XTStat"
  s.version      = "0.0.2"
  s.summary      = "iOS statment component"
  s.homepage     = "https://github.com/Akateason/XTStat"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "teason" => "akateason@qq.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/Akateason/XTStat.git", :tag => s.version }

  s.source_files  = "XTStat/Stat"
  s.public_header_files = "XTStat/Stat/*.h"

  s.dependency "XTlib/util"

end
