//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebView.h"

@interface WebView (DictionaryExtensions)
- (BOOL)isLocation:(struct CGPoint)arg1 inDOMRange:(id)arg2;
- (id)longestTermAtLocation:(struct CGPoint)arg1 inDictionaries:(struct __CFArray *)arg2 domRange:(id *)arg3;
- (id)webFrameAtLocation:(struct CGPoint)arg1;
- (struct CGPoint)frameOffset:(id)arg1;
- (BOOL)frameIsValid:(id)arg1;
- (BOOL)frameIsVisible:(id)arg1;
- (void)forceLayoutAllFrames;
- (void)setAllowAnimationScroll:(BOOL)arg1;
- (void)setScrollPositionToOffsetInPage:(double)arg1;
- (double)scrollPositionFromTopOfPage;
- (struct CGRect)selectionScreenRect;
- (id)selectedString;
- (BOOL)jumpToSelection;
- (id)webFrameHasSelection;
- (BOOL)hasSelection;
- (BOOL)processKeyCommand:(SEL)arg1;
- (void)setScrollersConfigWithSize:(unsigned long long)arg1;
@end

