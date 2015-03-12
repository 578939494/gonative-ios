//
//  LEANWebViewController.h
//  LeanIOS
//
//  Created by Weiyin He on 2/10/14.
// Copyright (c) 2014 GoNative.io LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "REFrostedViewController.h"
#import "LEANProfilePicker.h"
@class LEANTabManager;

static NSString *kLEANWebViewControllerUserStartedLoading = @"io.gonative.ios.WebViewController.started";
static NSString *kLEANWebViewControllerUserFinishedLoading = @"io.gonative.ios.WebViewController.finished";

@interface LEANWebViewController : UIViewController <UIWebViewDelegate>
@property BOOL checkLoginSignup;
@property LEANTabManager *tabManager;
@property NSURL *initialUrl;

- (IBAction) showMenu;
- (void) loadUrlString:(NSString*)url;
- (void) loadUrl:(NSURL*) url;
- (void) loadRequest:(NSURLRequest*) request;
- (void) loadUrl:(NSURL *)url andJavascript:(NSString*)js;
- (void) runJavascript:(NSString *) script;
- (void) logout;
- (void) showTabBar;
- (void) hideTabBar;
- (void) sharePage;

@end
