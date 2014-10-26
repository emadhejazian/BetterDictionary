//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface ApplicationController : NSObject
{
    NSMutableArray *_availableDictionaries;
    BOOL _appInitializeDone;
    BOOL _appTerminatedOnceInTAL;
    NSString *_activeDictionaryGlobalVars;
}

+ (id)sharedAppController;
@property(readonly) BOOL appInitializeDone; // @synthesize appInitializeDone=_appInitializeDone;
- (void)application:(id)arg1 runTest:(unsigned long long)arg2 duration:(double)arg3;
- (void)doLookupService:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)_prepareWindowsForTAL;
- (void)_prepareTerminationForTAL;
- (void)_changeTextSize:(id)arg1;
- (BOOL)_shouldOpenNewWindowForExternalRequest;
- (long long)_generateWindowIDForWindow:(id)arg1;
- (BOOL)_restoreSavedWindows:(id)arg1 foundNewDicts:(char *)arg2;
- (void)_prepareWindows;
- (void)_saveWindowStatesWithSettings:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)panel:(id)arg1 shouldShowFilename:(id)arg2;
- (void)activeDictionariesDidChanged:(id)arg1;
- (void)clearWebKitCacheDebug:(id)arg1;
- (id)dictionaryWindowList;
- (id)userAgentName;
- (void)updatePreference;
- (void)saveWindowStatesWithSettings:(BOOL)arg1 afterDelay:(double)arg2;
- (void)updateScopebarForAllWindows;
@property(readonly) NSString *activeDictionaryGlobalVars; // @synthesize activeDictionaryGlobalVars=_activeDictionaryGlobalVars;
- (void)upodateDictionaries:(id)arg1 inWindow:(id)arg2;
- (void)setAvailableDictionaries:(id)arg1;
- (id)availableDictionaries;
- (void)selectSearchField:(id)arg1;
- (void)doPrint:(id)arg1;
- (void)doPageSetup:(id)arg1;
- (void)openDictionaryFolder:(id)arg1;
- (void)showPreferences:(id)arg1;
- (void)selectPrevDictionary:(id)arg1;
- (void)selectNextDictionary:(id)arg1;
- (void)forwardHistory:(id)arg1;
- (void)backHistory:(id)arg1;
- (void)selectDictionary:(id)arg1;
- (void)newBrowserWindow:(id)arg1;
- (void)showAboutBox:(id)arg1;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (BOOL)_handleSearchTextAppleEvent;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)_delayedDidFinishLaunching;
- (id)_prepareMyPreferences;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)awakeFromNib;

@end

