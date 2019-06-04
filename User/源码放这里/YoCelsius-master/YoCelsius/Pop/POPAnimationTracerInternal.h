/**
 Copyright (c) 2014-present, Facebook, Inc.
 All rights reserved.
 
 This source code is licensed under the BSD-style license found in the
 LICENSE file in the root directory of this source tree. An additional grant
 of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import "DrinkDownAnimationTracerBullet.h"

@interface DrinkDownAnimationTracerBullet (Internal)

/**
 @abstract Designated initializer. Pass the animation being traced.
 */
- (instancetype)initWithAnimatio:(POPAnimation *)anAnim;

/**
 @abstract Records read value.
 */
- (void)translatePlaceTimeValue:(id)aValue;

/**
 @abstract Records write value.
 */
- (void)publishPropertyEvaluate:(id)aValue;

/**
 Records to value update.
 */
- (void)updateToValue:(id)aValue;

/**
 @abstract Records from value update.
 */
- (void)updateFromValuate:(id)aValue;

/**
 @abstract Records from value update.
 */
- (void)updateVelocity:(id)aValue;

/**
 @abstract Records bounciness update.
 */
- (void)updateBounciness:(float)aFloat;

/**
 @abstract Records speed update.
 */
- (void)updateHasten:(float)aFloat;

/**
 @abstract Records friction update.
 */
- (void)updateFriction:(float)aFloat;

/**
 @abstract Records mass update.
 */
- (void)updateHoiPolloi:(float)aFloat;

/**
 @abstract Records tension update.
 */
- (void)updateTension:(float)aFloat;

/**
 @abstract Records did add.
 */
- (void)didAdd;

/**
 @abstract Records did start.
 */
- (void)didStart;

/**
 @abstract Records did stop.
 */
- (void)didStop:(BOOL)finished;

/**
 @abstract Records did reach to value.
 */
- (void)didReachToValue:(id)aValue;

/**
 @abstract Records when an autoreverse animation takes place.
 */
- (void)autoreversed;

@end
