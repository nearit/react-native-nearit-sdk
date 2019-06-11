/*
 MIT License
 
 Copyright (c) 2019 nearit.com
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 */
//
//  RNNearItUtils.h
//  RNNearIt
//
//  Created by Federico Boschini <federico@nearit.com> on 10/06/2019.
//  Copyright © 2019 NearIT. All rights reserved.
//

#import <NearITSDK/NearITSDK.h>

@interface RNNearItUtils

- (NITCoupon*)unbundleNITCoupon:(NSDictionary* _Nonnull)bundledCoupon;
- (NSDictionary*)bundleNITCoupon:(NITCoupon* _Nonnull)coupon;
- (NSDictionary*)bundleNITHistoryItem:(NITHistoryItem* _Nonnull)item;
- (NITContent*)unbundleNITContent:(NSDictionary * _Nonnull)bundledContent;
- (NSDictionary*)bundleNITContent:(NITContent * _Nonnull)content;
- (NITFeedback*)unbundleNITFeedback:(NSDictionary * _Nonnull)bundledFeedback;
- (NSDictionary*)bundleNITFeedback:(NITFeedback * _Nonnull)feedback;
- (NSDictionary*)bundleNITCustomJSON:(NITCustomJSON* _Nonnull)custom;
- (NITImage*)unbundleNITImage:(NSDictionary* _Nonnull)bundledImage;
- (NSDictionary*)bundleNITImage:(NITImage* _Nonnull)image;
- (NSDictionary*)bundleNITContentLink:(NITContentLink* _Nonnull)cta;
- (NITTrackingInfo*)unbundleTrackingInfo:(NSString * _Nullable)bundledTrackingInfo;
- (NSString*)bundleTrackingInfo:(NITTrackingInfo* _Nullable)trackingInfo;

@end

