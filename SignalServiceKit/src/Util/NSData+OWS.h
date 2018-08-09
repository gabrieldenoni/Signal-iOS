//
//  Copyright (c) 2018 Open Whisper Systems. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@interface NSData (OWS)

/**
 * Compares data in constant time so as to help avoid potential timing attacks.
 */
- (BOOL)ows_constantTimeIsEqualToData:(NSData *)other;

- (NSData *)dataByAppendingData:(NSData *)data;

- (NSString *)hexadecimalString;

#pragma mark - Base64

+ (NSData *)dataFromBase64StringNoPadding:(NSString *)aString;
+ (NSData *)dataFromBase64String:(NSString *)aString;

- (NSString *)base64EncodedString;

@end

NS_ASSUME_NONNULL_END
