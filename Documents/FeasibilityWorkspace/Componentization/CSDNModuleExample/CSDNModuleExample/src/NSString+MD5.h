//
//  NSString+MD5.h
//  NetDemo
//
//  Created by wind on 6/11/2018.
//  Copyright © 2018 wind. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (MD5)

/**
 *  md5加密的字符串
 *
 *  @param str
 *
 *  @return
 */
+ (NSString *) md5:(NSString *) str;

@end

NS_ASSUME_NONNULL_END
