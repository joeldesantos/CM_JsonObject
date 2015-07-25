//
//  ViewController.m
//  CM-JsonObject
//
//  Created by Walter Gonzalez Domenzain on 18/07/15.
//  Copyright (c) 2015 Smartplace. All rights reserved.
//

#import "Start.h"
#define nUagLat 20.695306
#define nUagLng -103.418190

@interface Start ()

@end

@implementation Start

- (void)viewDidLoad {
    [super viewDidLoad];
    [self initData];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (void)initData {
    mjsonWeatherObject              = [Declarations getWeather:nUagLat and:nUagLng];
    
    mWeatherObject                  = [Parser parseWeatherObject];
    Weather *weather                = [Parser parseWeather];
    
    WeatherDetail *weatherDetail    = [weather getWeatherDetail:0];
    print(NSLog(@"icon %@", weatherDetail.icon))
}

- (IBAction)btnGetDataPressed:(id)sender {
    mjsonWeatherObject    = [Declarations getWeather:nUagLat and:nUagLng];
    mWeatherObject  = [Parser parseWeatherObject];
    
    float tempKelvin        = mWeatherObject.main.temp;
    float tempCelsius       = tempKelvin - 273.15;
    self.lblTemp.text       = [NSString stringWithFormat:@"%.2f ˚C", tempCelsius];
    self.lblTempMax.text    = [NSString stringWithFormat:@"%.2f ˚C", mWeatherObject.main.temp_max - 273.15];
    self.lblTempMin.text    = [NSString stringWithFormat:@"%.2f ˚C", mWeatherObject.main.temp_min - 273.15];
    self.lblPressure.text   = [NSString stringWithFormat:@"%d atm", mWeatherObject.main.pressure];
    self.lblHumidity.text   = [NSString stringWithFormat:@"%d %@", mWeatherObject.main.humidity, @"%"];
    
    self.lblWindDeg.text    = [NSString stringWithFormat:@"%d", mWeatherObject.wind.deg];
    self.lblWindSpeed.text  = [NSString stringWithFormat:@"%@", mWeatherObject.wind.speed];
    self.lblSysCountry.text = [NSString stringWithFormat:@"%@", mWeatherObject.sys.country];
    self.lblCloudsAll.text  = [NSString stringWithFormat:@"%d", mWeatherObject.clouds.all];
    self.lblName.text       = [NSString stringWithFormat:@"%@", mWeatherObject.name];
}
@end
