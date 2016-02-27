//
//  ActionSheetDatePicker.h
//  GroundIOS
//
//  Created by Gyuyoung Hwang on 13. 7. 27..
//  Copyright (c) 2013년 AnB. All rights reserved.
//


#import "AbstractActionSheetPicker.h"

@interface ActionSheetDatePicker : AbstractActionSheetPicker

+ (id)showPickerWithTitle:(NSString *)title datePickerMode:(UIDatePickerMode)datePickerMode selectedDate:(NSDate *)selectedDate minimumDate:(NSDate *)minimumDate target:(id)target action:(SEL)action origin:(id)origin;

- (id)initWithTitle:(NSString *)title datePickerMode:(UIDatePickerMode)datePickerMode selectedDate:(NSDate *)selectedDate minimumDate:(NSDate *)minimumDate target:(id)target action:(SEL)action origin:(id)origin;

- (void)eventForDatePicker:(id)sender;

@end
