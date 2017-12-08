#import "TGEditableCollectionItemView.h"

#import <LegacyComponents/TGStickerPack.h>

#import "TGStickerPackCollectionItem.h"

@interface TGStickerPackCollectionItemView : TGEditableCollectionItemView

@property (nonatomic, copy) void (^deleteStickerPack)();
@property (nonatomic, copy) void (^addStickerPack)();

- (void)setStickerPack:(TGStickerPack *)stickerPack;
- (void)setUnread:(bool)unread;
- (void)setStatus:(TGStickerPackItemStatus)status;
- (void)setIsChecked:(bool)isChecked;
- (void)setSearchStatus:(TGStickerPackItemSearchStatus)searchStatus;

@end
