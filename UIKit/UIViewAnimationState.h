/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>
#import <Availability2.h>

@class UIView, NSString;

@interface UIViewAnimationState : NSObject {
	UIViewAnimationState* _nextState;
	NSString* _animationID;
	void* _context;
	id _delegate;
	double _duration;
	double _delay;
	double _frameInterval;
	double _start;
	int _curve;
	float _repeatCount;
	int _transition;
	UIView* _transitionView;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	int _filter;
	UIView* _filterView;
	float _filterValue;	
#endif
	SEL _willStartSelector;
	SEL _didEndSelector;
	int _didEndCount;
	CGPoint _position;
	unsigned _willStartSent : 1;
	unsigned _useCurrentLayerState : 1;
	unsigned _cacheTransition : 1;
	unsigned _autoreverses : 1;
	unsigned _roundsToInteger : 1;
#if __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_3_2
	unsigned _reserved : 27;
#endif
}
+(void)pushViewAnimationState:(id)state context:(void*)context;
+(void)popAnimationState;
-(void)dealloc;
-(void)setAnimationAttributes:(id)attributes;
-(void)animationDidStart:(id)animation;
-(void)sendDelegateAnimationDidStop:(id)sendDelegateAnimation finished:(BOOL)finished;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
@end

