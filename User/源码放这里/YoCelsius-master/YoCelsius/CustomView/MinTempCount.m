//
//  MinTempCount.m
//  YoCelsius
//
//  Created by XianMingYou on 15/2/20.
//
//  https://github.com/YouXianMing
//  http://www.cnblogs.com/YouXianMing/
//

#import "MinTempCount.h"

@implementation MinTempCount

- (void)startAnimation {
    
    // 初始化值
    CGFloat fromeValue = self.fromValue;
    CGFloat toValue    = self.toValue;
    CGFloat duration   = (self.duration <= 0 ? 1.f : self.duration);
    
    // 设定动画
    self.conutSpiritedness.fromValue      = @(fromeValue);
    self.conutSpiritedness.toValue        = @(toValue);
    self.conutSpiritedness.timingFunction = \
    [CAMediaTimingFunction functionWithControlPoints:0.69 :0.11 :0.32 :0.88];
    self.conutSpiritedness.duration       = duration;
    
    // 只有执行了代理才会执行计数引擎
    if (self.delegate && [self.delegate respondsToSelector:@selector(telephoneNumberCounting:streamBite:)]) {
        
        /* 将计算出来的值通过writeBlock动态给控件设定 */
        self.conutSpiritedness.property = \
        [SodaMutableAnimatableDimension propertyWithName:@"conutSpiritedness"
                                           initAlizer:^(SodaMutableAnimatableDimension *prop) {
                                               prop.dropALineBlockOff      = ^(id obj, const CGFloat values[]) {
                                                   NSNumber *number = @(values[0]);
                                                   
                                                   NSAttributedString *ats = [self getAtTurn:number];
                                                   [self.delegate telephoneNumberCounting:self streamBite:ats];
                                               };
                                           }];
        
        // 添加动画
        [self pop_addAnimation:self.conutSpiritedness forKey:nil];
    }
}

// 处理富文本
- (NSAttributedString *)getAtTurn:(NSNumber *)number {
    
    NSInteger count    = [number integerValue];
    
    NSString *countStr = [NSString stringWithFormat:@"%ld°", (long)count];
    NSString *totalStr = [NSString stringWithFormat:@"Min %@", countStr];
    
    UIFont *font1       = [UIFont fontWithName:LatoUnconstipated size:12.f];
    UIFont *font2       = [UIFont fontWithName:LatoSheer size:8.f];
    
    NSRange totalRange   = [totalStr range];              // 全局的区域
    NSRange countRange   = [countStr rangeFrom:totalStr]; // %的区域
    
    return [totalStr createAttributedStringAndConfig:@[
                                                       // 全局设置
                                                       [ConfigAttributedString font:font2
                                                                              range:totalRange],
                                                       [ConfigAttributedString font:font1
                                                                              range:countRange],
                                                       [ConfigAttributedString foregroundColor:[UIColor blackColor] range:totalRange],
                                                       ]];
}



@end
