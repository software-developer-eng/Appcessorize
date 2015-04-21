
# Appcessorize Framework


Appcessorize is a simple library that lets users make their photos into phone cases. By integrating it in your application, your users will be able to get a real mobile case anywhere in the world. It is so easy: select images, add them to the case template, check out and **YOU ARE DONE!!**  

**Current version:** 1.0.1


## Installation

Installing Appcessorize.framework is a quick and easy process. This may be done manually or via [cocoapods](http://cocoapods.org/)

### Installing via Cocoapods (recommended)

If you have already installed CocoaPods then you can skip this step.

````
$ [sudo] gem install cocoapods
$ pod setup
````
Once CocoaPods has been installed, you can include Appcessorize framework to your project by editing Podfile in your project root directory.

Add the following to your Podfile:

````
pod 'Appcessorize'
````

Run `$ pod install`


You're all set! See 'Integration' for steps to integrate into your app.

### Manual Installation

1. [Download the repo](https://github.com/software-developer-eng/Appcessorize/archive/master.zip) from github

2. Add `Appcessorize.bundle` and `Appcessorize.framework` to your project.

3. In the Build Phases tab of your app's Target, under the "Link Binary With Libraries" section, hit the add button and add: **Social.framework**, **MessageUI.framework**, **MobileCoreServices.framework**, **SystemConfiguration.framework**, **MobileCoreServices.framework**

4. Ensure that `-ObjC` is added to `Other Linker Flags` in the Build Settings of your Target 


5. That's it. You are now ready to integrate!

Please report any issues [here](https://github.com/software-developer-eng/Appcessorize/issues)


## Integration

Integrating Appcessorize into your app is straightforward and easy. Just add `#import <Appcessorize/Appcessorize.h>` 

| File          | Description   |
| :------------ | :------------ |
|**Appcessorize.h**| The file you include in your project i.e. `#import <Appcessorize/Appcessorize.h>` |



where your users will launch the framework model. An example might be a selector for a UIButton touch. That is it all. You will be provided by the framework screens which you can switch between them using back button or tabs. Press back button in the home screen of the framework to return back to your native application.

Here is a sample code for doing this:

	AppcessorizeNavigationController *controller = [[AppcessorizeNavigationController alloc] init];
    
    if (controller) {
        [self presentViewController:controller animated:YES completion:NULL];
    }
    



## Found a bug?

You may report any issues with the framework or documentation [here](https://github.com/software-developer-eng/Appcessorize/issues)

