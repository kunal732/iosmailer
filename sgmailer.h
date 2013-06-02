//
//  sgmailer.h
//  Quick sendgrid library using webapi meant for demonstartion purposes onlyb//
//  Created by Kunal Batra on 6/2/13.
//  Copyright (c) 2013 SendGrid. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface sgmailer : NSObject

+ (void)sendMailFrom:(NSString *)from andTo:(NSString *)to withSubject:(NSString *)subject andBody:(NSString *)body withUser:(NSString *)user andPass:(NSString *)apipass;

@end
