/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRFileObjectID : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly) NSNumber *documentID;
@property (nonatomic, readonly) NSNumber *folderID;
@property (nonatomic, readonly) BOOL isDocumentID;
@property (nonatomic, readonly) BOOL isFolderOrAliasID;
@property (nonatomic, readonly) unsigned long long rawID;

+ (id)fileObjectIDForURL:(id)arg1 allocateDocID:(BOOL)arg2 error:(id*)arg3;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)documentID;
- (void)encodeWithCoder:(id)arg1;
- (id)folderID;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDocumentID;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFileObjectID:(id)arg1;
- (BOOL)isFolderOrAliasID;
- (unsigned long long)rawID;

@end