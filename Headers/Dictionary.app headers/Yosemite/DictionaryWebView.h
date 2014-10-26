//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebView.h"

@interface DictionaryWebView : WebView
{
    BOOL _nowPrinting;
    BOOL _printingAllView;
    struct CGSize _savedFrameSize;
    double _savedFrameMargin;
}

- (void)_printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (BOOL)lockingContentsForPrint;
- (void)printContentsInFrame:(id)arg1 jobTitle:(id)arg2;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_adjustPrintingMarginsForHeaderAndFooter;

@end

