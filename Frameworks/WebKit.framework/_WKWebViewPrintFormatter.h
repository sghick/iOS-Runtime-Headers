/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKWebViewPrintFormatter : UIViewPrintFormatter {
    struct RetainPtr<_WKFrameHandle> { 
        void *m_ptr; 
    }  _frameToPrint;
    struct RetainPtr<CGPDFDocument *> { 
        void *m_ptr; 
    }  _printedDocument;
}

@property (nonatomic, retain) _WKFrameHandle *frameToPrint;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_recalcPageCount;
- (id)_webView;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forPageAtIndex:(int)arg2;
- (id)frameToPrint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPageAtIndex:(int)arg1;
- (void)setFrameToPrint:(id)arg1;

@end
