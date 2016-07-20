/*===============================================================================
Copyright (c) 2012-2015 Qualcomm Connected Experiences, Inc. All Rights Reserved.

Vuforia is a trademark of QUALCOMM Incorporated, registered in the United States
and other countries. Trademarks of QUALCOMM Incorporated are used with permission.
===============================================================================*/

#import <UIKit/UIKit.h>
@class VideoPlaybackEAGLView;
#import "SampleApplicationSession.h"
#import "SampleAppMenuViewController.h"
#import <QCAR/DataSet.h>

@interface CloudRecoViewController : UIViewController <SampleApplicationControl, SampleAppMenuDelegate, UIAlertViewDelegate> {

    BOOL scanningMode;
    BOOL isVisualSearchOn;
    BOOL fullScreenPlayerPlaying;
    

    int lastErrorCode;

    // menu options
    BOOL extendedTrackingEnabled;
    BOOL continuousAutofocusEnabled;
    BOOL flashEnabled;
    BOOL frontCameraEnabled;
}

//@property (nonatomic, strong) CloudRecoEAGLView* eaglView;
- (void)rootViewControllerPresentViewController:(UIViewController*)viewController inContext:(BOOL)currentContext;
- (void)rootViewControllerDismissPresentedViewController;


@property (nonatomic, strong) VideoPlaybackEAGLView* eaglView;
@property (nonatomic, strong) UITapGestureRecognizer * tapGestureRecognizer;
@property (nonatomic, strong) SampleApplicationSession * vapp;

@property (nonatomic, readwrite) BOOL showingMenu;

- (BOOL) isVisualSearchOn;
- (void) toggleVisualSearch;

@end
