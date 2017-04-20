/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopStoriesCatchUpOperation : FCOperation {
    FCArticleList * _articleList;
    id /* block */  _catchUpCompletionHandler;
    FCCloudContext * _context;
    NSDate * _date;
    NSError * _error;
    NSArray * _headlines;
    <FCChannelProviding> * _topStoriesChannel;
}

@property (retain) FCArticleList *articleList;
@property (copy) id /* block */ catchUpCompletionHandler;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) NSDate *date;
@property (retain) NSError *error;
@property (copy) NSArray *headlines;
@property (copy) <FCChannelProviding> *topStoriesChannel;

- (void).cxx_destruct;
- (void)_checkShouldShowTopStoriesWithCompletionHandler:(id /* block */)arg1;
- (id)articleList;
- (id /* block */)catchUpCompletionHandler;
- (id)context;
- (id)date;
- (id)error;
- (id)headlines;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setArticleList:(id)arg1;
- (void)setCatchUpCompletionHandler:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHeadlines:(id)arg1;
- (void)setTopStoriesChannel:(id)arg1;
- (id)topStoriesChannel;
- (BOOL)validateOperation;

@end