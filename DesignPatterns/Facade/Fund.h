//
//  Fund.h
//  DesignPatterns
//
//  Created by leichunfeng on 14/12/18.
//  Copyright (c) 2014年 zdnst. All rights reserved.
//
//  外观模式(Facade),为子系统中的一组接口提供一个一致的界面，此模式定义了一个高层接口，这个接口使得这一子系统更加容易使用。
//  何时使用外观模式:
//  首先，在设计初期阶段，应该要有意识的将不同的两个层分离，层与层之间建立外观Facade
//  其次，在开发阶段，子系统往往因为不断的重构演化而变得越来越复杂，增加外观Facade可以提供一个简单的接口，减少它们之间的依赖。
//  第三，在维护一个遗留的大型系统时，可能这个系统已经非常难以维护和扩展了，为新系统开发一个外观Facade类，来提供设计粗糙或高度复杂的遗留代码的比较清晰简单的接口，让新系统与Facade对象交互，Facade与遗留代码交互所有复杂的工作。

#import <Foundation/Foundation.h>

@interface Fund : NSObject

///  购买基金
- (void)buyFund;

///  赎回基金
- (void)sellFund;

@end
