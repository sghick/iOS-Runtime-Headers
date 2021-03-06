/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSSession : NSObject <IDSBaseSocketPairConnectionDelegate, IDSDaemonListenerProtocol> {
    NSString * _accountID;
    BOOL  _alwaysSkipSelf;
    id  _boostContext;
    NSString * _clientUUID;
    unsigned int  _connectionCountHint;
    CUTWeakReference * _delegate;
    id  _delegateContext;
    NSSet * _destinations;
    BOOL  _disableEncryption;
    BOOL  _disallowCellularInterface;
    BOOL  _disallowWifiInterface;
    BOOL  _enableSingleChannelDirectMode;
    int  _inviteTimeout;
    BOOL  _isAudioEnabled;
    BOOL  _isLegacy;
    BOOL  _isMuted;
    BOOL  _needsToWaitForPreConnectionData;
    BOOL  _preferCellularForCallSetup;
    NSMutableDictionary * _preferences;
    unsigned int  _preferredAddressFamily;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _sessionConfig;
    unsigned int  _sessionEndedReason;
    BOOL  _shouldUseSocketForTransport;
    int  _socket;
    unsigned int  _state;
    int  _transportType;
    NSString * _uniqueID;
    IDSBaseSocketPairConnection * _unreliableSocketPairConnection;
}

@property (nonatomic, retain) id boostContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int inviteTimeout;
@property (nonatomic, readonly) unsigned int sessionEndedReason;
@property (nonatomic, readonly) int socket;
@property (nonatomic, readonly) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueID;

- (unsigned int)MTUForAddressFamily:(unsigned int)arg1;
- (void)_broadcastNewSessionToDaemon;
- (void)_callDelegateWithBlock:(id /* block */)arg1;
- (void)_cleanupSocketPairConnections;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(int)arg3 connectionCountHint:(unsigned int)arg4 needsToWaitForPreConnectionData:(BOOL)arg5 uniqueID:(id)arg6 delegateContext:(id)arg7;
- (void)_setupSocketPairToDaemon;
- (void)_setupUnreliableSocketPairConnection;
- (void)acceptInvitation;
- (void)acceptInvitationWithData:(id)arg1;
- (id)boostContext;
- (void)cancelInvitation;
- (void)cancelInvitationWithData:(id)arg1;
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)daemonDisconnected;
- (void)dealloc;
- (void)declineInvitation;
- (void)declineInvitationWithData:(id)arg1;
- (void)endSession;
- (void)endSessionWithData:(id)arg1;
- (BOOL)getAudioEnabled;
- (BOOL)getMuted;
- (id)getPreferences;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(int)arg3 delegateContext:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(int)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5;
- (int)inviteTimeout;
- (BOOL)sendData:(id)arg1 error:(id*)arg2;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(BOOL)arg2;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)sendSessionMessage:(id)arg1;
- (void)session:(id)arg1 audioEnabled:(BOOL)arg2;
- (void)session:(id)arg1 invitationSentToTokens:(id)arg2 shouldBreakBeforeMake:(BOOL)arg3;
- (void)session:(id)arg1 muted:(BOOL)arg2;
- (void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (unsigned int)sessionEndedReason;
- (void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)setAudioEnabled:(BOOL)arg1;
- (void)setBoostContext:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setInviteTimeout:(int)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setPreferences:(id)arg1;
- (BOOL)shouldUseSocketForTransport;
- (int)socket;
- (unsigned int)state;
- (id)uniqueID;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

@end
