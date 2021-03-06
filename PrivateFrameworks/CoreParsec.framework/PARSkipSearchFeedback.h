/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARSkipSearchFeedback : SFFeedback {
    NSString * _input;
    unsigned int  _triggerEvent;
}

@property (nonatomic, copy) NSString *input;
@property (nonatomic) unsigned int triggerEvent;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTriggerEvent:(unsigned int)arg1 input:(id)arg2;
- (id)input;
- (void)setInput:(id)arg1;
- (void)setTriggerEvent:(unsigned int)arg1;
- (unsigned int)triggerEvent;

@end
