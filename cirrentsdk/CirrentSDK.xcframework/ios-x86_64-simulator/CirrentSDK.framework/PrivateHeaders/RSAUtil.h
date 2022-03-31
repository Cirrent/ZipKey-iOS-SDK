//
//  RSAUtil.h
//  Cirrent
//
//  Created by P on 1/29/17.
//  Copyright © 2017 PSIHPOK. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RSAUtil : NSObject

+(NSData*) encryptString:(NSString*) data withKey:(NSString*) key;
+(NSString*) decryptString:(NSData*) data withKey:(NSString*) key;

@end
