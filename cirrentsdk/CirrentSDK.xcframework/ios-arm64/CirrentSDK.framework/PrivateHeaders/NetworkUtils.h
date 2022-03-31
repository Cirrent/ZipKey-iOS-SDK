#import <Foundation/Foundation.h>

@interface NetworkUtils : NSObject

+(NSString*) getHostnameFromIp:(NSString*)ipAddress;

+(NSString*) getWifiAddress;

+(NSString*) resolveServiceAddress:(NSArray *)addresses;
@end

