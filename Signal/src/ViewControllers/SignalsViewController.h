//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InboxTableViewCell.h"
#import "Contact.h"
#import "TSGroupModel.h"

@interface SignalsViewController : UIViewController

// TODO: Remove this property.
@property (nonatomic) BOOL newlyRegisteredUser;

- (void)presentThread:(TSThread *)thread
    keyboardOnViewAppearing:(BOOL)keyboardOnViewAppearing
        callOnViewAppearing:(BOOL)callOnViewAppearing;

- (NSNumber *)updateInboxCountLabel;

- (IBAction)composeNew;

- (void)presentTopLevelModalViewController:(UIViewController *)viewController
                          animateDismissal:(BOOL)animateDismissal
                       animatePresentation:(BOOL)animatePresentation;
- (void)pushTopLevelViewController:(UIViewController *)viewController
                  animateDismissal:(BOOL)animateDismissal
               animatePresentation:(BOOL)animatePresentation;

@end
