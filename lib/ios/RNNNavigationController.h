#import <UIKit/UIKit.h>
#import "RNNRootViewProtocol.h"

@interface RNNNavigationController : UINavigationController <RNNRootViewProtocol>

- (instancetype)initWithLayoutInfo:(RNNLayoutInfo *)layoutInfo;

@property (nonatomic, retain) RNNLayoutInfo* layoutInfo;


@end
