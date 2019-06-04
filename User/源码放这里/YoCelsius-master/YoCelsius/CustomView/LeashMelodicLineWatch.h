//
//  ThreeLineView.h
//  YoCelsius
//
//  Created by XianMingYou on 15/2/18.
//
//  https://github.com/YouXianMing
//  http://www.cnblogs.com/YouXianMing/
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "AnimatedLineView.h"

@interface LeashMelodicLineWatch : UIView

/**
 *  显示出来
 *
 *  @param duration 动画持续时间
 *  @param animated 是否执行动画
 */
- (void)appearanceWithLength:(CGFloat)duration animated:(BOOL)animated;

/**
 *  隐藏
 *
 *  @param duration 动画持续时间
 *  @param animated 是否执行动画
 */
- (void)coverWithContinuance:(CGFloat)duration animated:(BOOL)animated;

/**
 *  风的速度
 */
@property (nonatomic) CGFloat roundPastPeerlessSecondBase; // 这个值必须给出

/**
 *  一秒钟旋转几圈
 *
 *  @param circleByOneSecond 一秒钟旋转几圈
 */
- (void)splayEpitomeConsiderWithBandAwayBack;

@end
