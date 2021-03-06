//
//  RootController.h
//  BarChart
//
//  Created by Kirill Mezrin on 15.02.12. Updated by iRare Media on August 12, 2013
//  Copyright (c) 2012 Kirill Mezrin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BarChartView.h"

@interface RootController : UIViewController <BarViewDelegate>

@property (strong, nonatomic) IBOutlet BarChartView *barChart;

- (IBAction)dismissController:(id)sender;
- (IBAction)viewDocumentation:(id)sender;

@end
