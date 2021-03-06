/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSliderValueTableViewCell : UITableViewCell {
    <HUSliderValueTableViewCellDelegate> * _delegate;
    UISlider * _slider;
    UILabel * _valueLabel;
}

@property (nonatomic) <HUSliderValueTableViewCellDelegate> *delegate;
@property (nonatomic) float maximumValue;
@property (nonatomic) float minimumValue;
@property (nonatomic, retain) UISlider *slider;
@property (nonatomic) float value;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (void)_sliderChanged:(id)arg1;
- (id)delegate;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (float)maximumValue;
- (float)minimumValue;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setMaximumValue:(float)arg1;
- (void)setMinimumValue:(float)arg1;
- (void)setSlider:(id)arg1;
- (void)setValue:(float)arg1;
- (void)setValueLabel:(id)arg1;
- (id)slider;
- (float)value;
- (id)valueLabel;

@end
