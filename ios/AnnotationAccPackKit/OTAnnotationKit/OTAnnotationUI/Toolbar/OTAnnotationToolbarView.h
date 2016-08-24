//
//  OTAnnotationToolbarView.h
//
//  Copyright © 2016 Tokbox, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OTAnnotationColorPickerView.h"

@interface OTAnnotationToolbarView : UIView
@property (nonatomic, readonly) CGFloat gapOfToolBarAndColorPicker;
@property (nonatomic, readonly) OTAnnotationColorPickerView *colorPickerView;
@end
