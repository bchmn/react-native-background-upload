
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNBackgroundUploadSpec.h"

@interface BackgroundUpload : NSObject <NativeBackgroundUploadSpec>
#else
#import <React/RCTBridgeModule.h>

@interface BackgroundUpload : NSObject <RCTBridgeModule>
#endif

@end
