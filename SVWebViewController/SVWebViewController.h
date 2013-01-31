//
//  SVWebViewController.h
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import <MessageUI/MessageUI.h>

#import "SVModalWebViewController.h"

@interface SVWebViewController : UIViewController

- (id)initWithAddress:(NSString*)urlString;
- (id)initWithURL:(NSURL*)URL;

@property (nonatomic, readwrite) SVWebViewControllerAvailableActions availableActions;
@property (nonatomic, weak) id<UIWebViewDelegate> delegate;

@property (nonatomic, strong, readwrite) UIBarButtonItem *backBarButtonItem;
@property (nonatomic, strong, readwrite) UIBarButtonItem *forwardBarButtonItem;
@property (nonatomic, strong, readwrite) UIBarButtonItem *refreshBarButtonItem;
@property (nonatomic, strong, readwrite) UIBarButtonItem *stopBarButtonItem;
@property (nonatomic, strong, readwrite) UIBarButtonItem *actionBarButtonItem;

@end
