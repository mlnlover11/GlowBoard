/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol SBIconViewDelegate <NSObject>

@optional
- (void)iconHandleLongPress:(id)arg1;
- (void)iconTouchBegan:(id)arg1;
- (void)icon:(id)arg1 touchMoved:(id)arg2;
- (void)icon:(id)arg1 touchEnded:(_Bool)arg2;
- (_Bool)iconShouldAllowTap:(id)arg1;
- (void)iconTapped:(id)arg1;
- (_Bool)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2;
- (void)icon:(id)arg1 openFolder:(id)arg2 animated:(_Bool)arg3;
- (void)iconCloseBoxTapped:(id)arg1;
- (_Bool)iconViewDisplaysBadges:(id)arg1;
- (_Bool)iconViewDisplaysCloseBox:(id)arg1;
- (double)iconLabelWidth;
@end

