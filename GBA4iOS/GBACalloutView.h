//
//  GBACalloutView.h
//  GBA4iOS
//
//  Created by Riley Testut on 12/25/13.
//  Copyright (c) 2013 Riley Testut. All rights reserved.
//

#import "SMCalloutView.h"

@class GBACalloutView;

@protocol GBACalloutViewInteractionDelegate <NSObject>

@optional
- (void)calloutViewWasTapped:(GBACalloutView *)calloutView;

- (void)calloutViewWillBeginTranslating:(GBACalloutView *)calloutView;
- (void)calloutView:(GBACalloutView *)calloutView didTranslate:(CGPoint)translation;
- (void)calloutViewDidFinishTranslating:(GBACalloutView *)calloutView;

@end

extern SMCalloutAnimation SMCalloutAnimationNone;

@interface GBACalloutView : SMCalloutView

@property (nonatomic, weak) id<GBACalloutViewInteractionDelegate> interactionDelegate;

@end
