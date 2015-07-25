//
//  ViewController.h
//  CM-JsonObject
//
//  Created by Walter Gonzalez Domenzain on 18/07/15.
//  Copyright (c) 2015 Smartplace. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Declarations.h"
#import "Parser.h"


@interface Start : UIViewController
@property (nonatomic,strong)    Declarations            *Declarations;
@property (nonatomic,strong)    Parser                  *Parser;

//Objects
@property (strong, nonatomic) IBOutlet UILabel *lblTemp;
@property (strong, nonatomic) IBOutlet UILabel *lblTempMax;
@property (strong, nonatomic) IBOutlet UILabel *lblTempMin;
@property (strong, nonatomic) IBOutlet UILabel *lblPressure;
@property (strong, nonatomic) IBOutlet UILabel *lblHumidity;
@property (strong, nonatomic) IBOutlet UILabel *lblWindDeg;
@property (strong, nonatomic) IBOutlet UILabel *lblWindSpeed;
@property (strong, nonatomic) IBOutlet UILabel *lblSysCountry;
@property (strong, nonatomic) IBOutlet UILabel *lblCloudsAll;
@property (strong, nonatomic) IBOutlet UILabel *lblName;

//Actions
- (IBAction)btnGetDataPressed:(id)sender;


@end

