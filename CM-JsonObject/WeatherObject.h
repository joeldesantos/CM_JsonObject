//
//  WeatherObject.h
//  CM-JsonObject
//
//  Created by Walter Gonzalez Domenzain on 18/07/15.
//  Copyright (c) 2015 Smartplace. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Coord.h"
#import "MainObject.h"
#import "WeatherDetail.h"
#import "Weather.h"
#import "Clouds.h"
#import "Sys.h"
#import "Wind.h"

@interface WeatherObject : NSObject
@property (nonatomic) int           ID;
@property (nonatomic) NSString      *name;
@property (nonatomic) NSString      *base;
@property (nonatomic) int           cod;
@property (nonatomic) int           dt;

@property (nonatomic) Coord         *coord;
@property (nonatomic) MainObject    *main;
@property (nonatomic) Weather       *weather;
@property (nonatomic) Clouds        *clouds;
@property (nonatomic) Sys           *sys;
@property (nonatomic) Wind          *wind;

@end
