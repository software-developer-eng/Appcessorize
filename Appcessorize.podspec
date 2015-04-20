Pod::Spec.new do |s|
  s.name            = "Appcessorize"
  s.version          = "1.0.1"
  s.summary          = "Appcessorize is a simple library that lets users make their photos into phone cases."
  s.description      = "Appcessorize is a simple library that lets users make their photos into phone cases. By integrating it in your application, your users will be able to get a real mobile case anywhere in the world. It is so easy: select images, add them to the case template, check out and **YOU ARE DONE!!**"

  s.homepage     = "https://github.com/software-developer-eng/Appcessorize"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "Shimaa Essam" => "shimaa@nweave.com" }
  s.source       = { :git => "https://github.com/software-developer-eng/Appcessorize.git", :tag => s.version.to_s}

  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.ios.vendored_frameworks = 'Appcessorize.framework'
  s.resources = 'Appcessorize.bundle'

  s.frameworks = 'Social', 'MessageUI', 'SystemConfiguration', 'MobileCoreServices'
end
