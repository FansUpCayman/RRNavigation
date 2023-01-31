//  Created by Shaw on 1/30/23.

#import <Foundation/Foundation.h>

//! Project version number for RRNavigation.
FOUNDATION_EXPORT double RRNavigationVersionNumber;

//! Project version string for RRNavigation.
FOUNDATION_EXPORT const unsigned char RRNavigationVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <RRNavigation/PublicHeader.h>

#if __has_include(<RRNavigation/RRNavigationController.h>)
#import <RRNavigation/RRNavigationController.h>
#import <RRNavigation/RRPopConfiguration.h>
#else
#import "RRNavigationController.h"
#import "RRPopConfiguration.h"
#endif
