#import "TGCollectionItem.h"

@interface TGUsernameCollectionItem : TGCollectionItem

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *placeholder;
@property (nonatomic, strong) NSString *prefix;

@property (nonatomic, strong) NSString *username;
@property (nonatomic) bool usernameValid;
@property (nonatomic) bool usernameChecking;
@property (nonatomic) bool clearable;

@property (nonatomic) UITextAutocapitalizationType autocapitalizationType;
@property (nonatomic) bool secureEntry;
@property (nonatomic) UIKeyboardType keyboardType;
@property (nonatomic) UIReturnKeyType returnKeyType;

@property (nonatomic) CGFloat minimalInset;

@property (nonatomic, copy) void (^usernameChanged)(NSString *);
@property (nonatomic, copy) void (^returnPressed)(TGUsernameCollectionItem *);
@property (nonatomic, copy) NSString *(^textPasted)(NSRange, NSString *);

- (void)becomeFirstResponder;

@end
