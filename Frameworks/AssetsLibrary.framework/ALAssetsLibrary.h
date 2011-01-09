/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */



@interface ALAssetsLibrary : NSObject 
{
    id _internal;
}

@property(retain) ALAssetsLibraryPrivate *internal;


- (BOOL)isValid;
- (id)init;
- (void)dealloc;
- (id)internal;
- (void)setInternal:(id)arg1;
- (void)notify;
- (void)photoLibraryDidChange:(id)arg1;
- (BOOL)_libraryIsAvailable;
- (id)publicErrorFromPrivateError:(id)arg1;
- (id)publicErrorForPrivateDomain:(id)arg1 withPrivateCode:(NSInteger)arg2;
- (void)enumerateGroupsWithTypes:(NSUInteger)arg1 usingBlock:(id)arg2 failureBlock:(id)arg3;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage { }*)arg1 orientation:(NSInteger)arg2 completionBlock:(id)arg3;
- (void)writeVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(id)arg2;
- (BOOL)videoAtPathIsCompatibleWithSavedPhotosAlbum:(id)arg1;
- (void)assetForURL:(id)arg1 resultBlock:(id)arg2 failureBlock:(id)arg3;
- (void)addAsset:(id)arg1;

@end