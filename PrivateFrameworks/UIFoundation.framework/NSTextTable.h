/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextTable : NSTextBlock {
    id  _lcache;
    unsigned int  _numCols;
    unsigned int  _tableFlags;
    void * _tablePrimary;
    void * _tableSecondary;
}

+ (void)initialize;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectForCharRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 textContainer:(id)arg2;
- (id)_descriptionAtIndex:(unsigned int)arg1 text:(id)arg2;
- (BOOL)_missingColumnsForRowRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 blockIndex:(unsigned int)arg2 text:(id)arg3;
- (id)_rowArrayForBlock:(id)arg1 atIndex:(unsigned int)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(float)arg5 withRepetitions:(BOOL)arg6 collapseBorders:(BOOL)arg7 rowCharRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg8 indexInRow:(unsigned int*)arg9 startingRow:(int*)arg10 startingColumn:(int*)arg11 previousRowBlockHelper:(id*)arg12;
- (void)_setTableFlags:(unsigned int)arg1;
- (unsigned int)_tableFlags;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsRectForBlock:(id)arg1 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 textContainer:(id)arg4 characterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5;
- (BOOL)collapsesBorders;
- (void)dealloc;
- (void)drawBackgroundForBlock:(id)arg1 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3 characterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 layoutManager:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hidesEmptyCells;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)layoutAlgorithm;
- (unsigned int)numberOfColumns;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForBlock:(id)arg1 layoutAtPoint:(struct CGPoint { float x1; float x2; })arg2 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 textContainer:(id)arg4 characterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5;
- (void)setCollapsesBorders:(BOOL)arg1;
- (void)setHidesEmptyCells:(BOOL)arg1;
- (void)setLayoutAlgorithm:(unsigned int)arg1;
- (void)setNumberOfColumns:(unsigned int)arg1;

@end
