//
//  FUBaseViewController.h
//  FULiveDemo
//
//  Created by 孙慕 on 2019/1/28.
//  Copyright © 2019年 FaceUnity. All rights reserved.
//
/* 视频采集·切换，公用UI，基类控制器 */

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "FUHeadButtonView.h"
#import "FUPhotoButton.h"
#import "FUOpenGLView.h"
#import "FUGestureView.h"
#define KScreenWidth ([UIScreen mainScreen].bounds.size.width)
#define KScreenHeight ([UIScreen mainScreen].bounds.size.height)
#define  iPhoneXStyle ((KScreenWidth == 375.f && KScreenHeight == 812.f ? YES : NO) || (KScreenWidth == 414.f && KScreenHeight == 896.f ? YES : NO))

NS_ASSUME_NONNULL_BEGIN


@interface FUBaseViewController : UIViewController<FUHeadButtonViewDelegate>

@property (strong, nonatomic) FUHeadButtonView *headButtonView;
@property (strong, nonatomic) FUOpenGLView *renderView;
@property (strong, nonatomic) UILabel *noTrackLabel;
@property (strong, nonatomic) UILabel *tipLabel;

@property (strong, nonatomic) FUOpenGLView *mPerView;

@property (strong, nonatomic) FUGestureView *mGestureView;

@property (strong, nonatomic) FUGestureView *mActionView;

/* 子类重载，实现差异逻辑 */
-(void)takePhotoToSave:(UIImage *)image;//拍照保存
-(void)didOutputVideoSampleBuffer:(CMSampleBufferRef)sampleBuffer;


@end

NS_ASSUME_NONNULL_END