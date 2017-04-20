/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTelevisionPairingSession : MRCryptoPairingSession {
    MRCryptoPairingSessionBlockDelegate * _pairingDelegate;
    MRCoreUtilsPairingSession * _pairingSession;
}

@property (nonatomic, readonly) BOOL hasExchangedMessage;
@property (nonatomic, retain) MRCryptoPairingSessionBlockDelegate *pairingDelegate;
@property (nonatomic, retain) MRCoreUtilsPairingSession *pairingSession;
@property (nonatomic, readonly) unsigned int state;
@property (getter=isUsingSystemPairing, nonatomic, readonly) BOOL usingSystemPairing;

- (void)_openSecuritySessionInState:(unsigned int)arg1 useSystemPairing:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)_useSystemPairing;
- (void)close;
- (void)dealloc;
- (id)decryptData:(id)arg1 withError:(id*)arg2;
- (BOOL)deleteIdentityWithError:(id*)arg1;
- (id)encryptData:(id)arg1 withError:(id*)arg2;
- (void)handlePairingExchangeData:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePairingFailureWithStatus:(long)arg1;
- (BOOL)hasExchangedMessage;
- (id)initWithDevice:(void*)arg1;
- (BOOL)isPaired;
- (BOOL)isUsingSystemPairing;
- (BOOL)isValid;
- (void)open;
- (id)pairedDevices;
- (id)pairingDelegate;
- (id)pairingSession;
- (id)removePeer;
- (void)setDelegate:(id)arg1;
- (void)setPairingDelegate:(id)arg1;
- (void)setPairingSession:(id)arg1;
- (unsigned int)state;
- (id)updatePeer;

@end