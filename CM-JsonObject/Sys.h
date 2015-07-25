//
//  Sys.h
//  CM-JsonObject
//
//  Created by Aleyr on 7/24/15.
//  Copyright (c) 2015 Smartplace. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Sys : NSObject

@property (nonatomic) int       ID;
@property (nonatomic) NSString  *country;
@property (nonatomic) NSString  *message;
@property (nonatomic) long       sunrise;
@property (nonatomic) long       sunset;
@property (nonatomic) int       type;

@end
