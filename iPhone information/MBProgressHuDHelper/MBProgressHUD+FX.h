//
//  MBProgressHUD+FX.h
//
//  Created by ftxbird on 14-1-18.
//  Copyright (c) 2014年 start. All rights reserved.
//

#import "MBProgressHUD.h"

@interface MBProgressHUD (FX)
/**
 *  显示成功信息,附带成功标记
 *
 *  @param success 自定义字符串
 *  @param view    目标视图
 */
+ (void)showSuccess:(NSString *)success toView:(UIView *)view;
/**
 *  显示失败信息,附带失败标记
 *
 *  @param success 自定义字符串
 *  @param view    目标视图
 */
+ (void)showError:(NSString *)error toView:(UIView *)view;

/**
 *  显示一些信息
 *
 *  @param message 自定义信息
 *  @param view    目标视图
 *
 *  @return MBProgressHUD对象
 */
+ (MBProgressHUD *)showMessage:(NSString *)message toView:(UIView *)view;

/**
 *  显示成功
 *
 *  @param success 自定义字符串
 */
+ (void)showSuccess:(NSString *)success;

/**
 *  显示失败
 *
 *  @param error 自定义字符串
 */
+ (void)showError:(NSString *)error;

/**
 *  显示一条消息
 *
 *  @param message 消息
 *
 *  @return MBProgressHUD对象
 */
+ (MBProgressHUD *)showMessage:(NSString *)message;

/**
 *  从对应视图隐藏HUD
 *
 *  @param view 目标视图
 */
+ (void)hideHUDForView:(UIView *)view;

/**
 *  隐藏HUD
 */
+ (void)hideHUD;


+ (void)show:(NSString *)text icon:(NSString *)icon view:(UIView *)view;

@end
