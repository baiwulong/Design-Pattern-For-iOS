//
//  HCDTranslator.h
//  12适配器模式
//
//  Created by 黄成都 on 15/8/14.
//  Copyright (c) 2015年 黄成都. All rights reserved.
//

// 适配旧接口

#import "HCDPlayer.h"
@class HCDForeignCenter;
@interface HCDTranslator : HCDPlayer
@property(nonatomic,strong)HCDForeignCenter *foreigncenter;
@end
