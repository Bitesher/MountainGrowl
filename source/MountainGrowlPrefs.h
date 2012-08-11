//
//  MountainGrowlPrefs.h
//
//  Created by Ullrich Schäfer
//  Copyright 2012 nxtbgthng GmbH All rights reserved.
//

#import <PreferencePanes/PreferencePanes.h>

@interface MountainGrowlPrefs: NSPreferencePane

@property (nonatomic, retain) IBOutlet NSString *mountainGrowlLabel;
@property (nonatomic, retain) IBOutlet NSString *nxtbgthngLabel;
@property (nonatomic, retain) IBOutlet NSString *versionLabel;

@end
