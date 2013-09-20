/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKPGenericShieldVariant : PBCodable {
    struct { 
        unsigned int fontSize : 1; 
        unsigned int leftCapWidth : 1; 
        unsigned int leftPadding : 1; 
        unsigned int lineSpacing : 1; 
        unsigned int numberOfLines : 1; 
        unsigned int rightCapWidth : 1; 
        unsigned int rightPadding : 1; 
        unsigned int textBaseLine : 1; 
    NSString *_fontName;
    float _fontSize;
    } _has;
    struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; } *_layers;
    unsigned int _layersCount;
    unsigned int _layersSpace;
    float _leftCapWidth;
    float _leftPadding;
    float _lineSpacing;
    unsigned int _numberOfLines;
    float _rightCapWidth;
    float _rightPadding;
    float _textBaseLine;
}

@property(retain) NSString * fontName;
@property float fontSize;
@property(readonly) BOOL hasFontName;
@property BOOL hasFontSize;
@property BOOL hasLeftCapWidth;
@property BOOL hasLeftPadding;
@property BOOL hasLineSpacing;
@property BOOL hasNumberOfLines;
@property BOOL hasRightCapWidth;
@property BOOL hasRightPadding;
@property BOOL hasTextBaseLine;
@property(readonly) struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }* layers;
@property(readonly) unsigned int layersCount;
@property float leftCapWidth;
@property float leftPadding;
@property float lineSpacing;
@property unsigned int numberOfLines;
@property float rightCapWidth;
@property float rightPadding;
@property float textBaseLine;

- (struct CGSize { float x1; float x2; })_imageSizeWithTextureAtlases:(id)arg1;
- (void)addLayer:(struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; })arg1;
- (void)clearLayers;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fontName;
- (float)fontSize;
- (BOOL)hasFontName;
- (BOOL)hasFontSize;
- (BOOL)hasLeftCapWidth;
- (BOOL)hasLeftPadding;
- (BOOL)hasLineSpacing;
- (BOOL)hasNumberOfLines;
- (BOOL)hasRightCapWidth;
- (BOOL)hasRightPadding;
- (BOOL)hasTextBaseLine;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; })layerAtIndex:(unsigned int)arg1;
- (struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*)layers;
- (unsigned int)layersCount;
- (float)leftCapWidth;
- (float)leftPadding;
- (float)lineSpacing;
- (struct CGImage { }*)newImageWithBackgroundColor:(struct CGColor { }*)arg1 borderColor:(struct CGColor { }*)arg2 textureAtlases:(id)arg3 contentScale:(float)arg4;
- (unsigned int)numberOfLines;
- (BOOL)readFrom:(id)arg1;
- (float)rightCapWidth;
- (float)rightPadding;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setHasFontSize:(BOOL)arg1;
- (void)setHasLeftCapWidth:(BOOL)arg1;
- (void)setHasLeftPadding:(BOOL)arg1;
- (void)setHasLineSpacing:(BOOL)arg1;
- (void)setHasNumberOfLines:(BOOL)arg1;
- (void)setHasRightCapWidth:(BOOL)arg1;
- (void)setHasRightPadding:(BOOL)arg1;
- (void)setHasTextBaseLine:(BOOL)arg1;
- (void)setLayers:(struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*)arg1 count:(unsigned int)arg2;
- (void)setLeftCapWidth:(float)arg1;
- (void)setLeftPadding:(float)arg1;
- (void)setLineSpacing:(float)arg1;
- (void)setNumberOfLines:(unsigned int)arg1;
- (void)setRightCapWidth:(float)arg1;
- (void)setRightPadding:(float)arg1;
- (void)setTextBaseLine:(float)arg1;
- (float)textBaseLine;
- (void)writeTo:(id)arg1;

@end