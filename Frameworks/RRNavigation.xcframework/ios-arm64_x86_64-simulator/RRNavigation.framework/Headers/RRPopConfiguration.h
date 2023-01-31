//  Created by Shaw on 1/30/23.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, RRPopGestureRecognizeRegion) {
  RRPopGestureRecognizeRegionEdge,
  RRPopGestureRecognizeRegionFull
};

@protocol RRPopConfiguration <NSObject>

- (RRPopGestureRecognizeRegion)rrPopGestureRecognizeRegion;

@end

NS_ASSUME_NONNULL_END
