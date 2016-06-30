//
//  ViewController.h
//  Calculator
//
//  Created by ilabafrica on 6/29/16.
//  Copyright (c) 2016 strathmore. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef enum{ Plus,Minus,Multiply,Divide} CalcOperation;

@interface ViewController : UIViewController{
    
    IBOutlet UITextField *txtDisplay;
    NSString *storage;
    CalcOperation operation;
    
}
- (IBAction)btnClear:(UIButton *)sender;
- (IBAction)button0:(UIButton *)sender;
- (IBAction)button1:(UIButton *)sender;
- (IBAction)button2:(UIButton *)sender;
- (IBAction)button3:(UIButton *)sender;
- (IBAction)btnPlus:(UIButton *)sender;
- (IBAction)btnEquals:(UIButton *)sender;

@end

