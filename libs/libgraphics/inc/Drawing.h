#ifndef __DRAWING_H__
#define __DRAWING_H__

#include <Bitmap.h>
#include <Pixels.h>

#define SCREEN_X 320
#define SCREEN_Y 200

typedef Pixel (*CompositionMode)(Pixel below,Pixel above);

void DrawPixel(Bitmap *bitmap,int x,int y,Pixel c);
void DrawPixelNoClip(Bitmap *bitmap,int x,int y,Pixel c);
void CompositePixel(Bitmap *bitmap,int x,int y,Pixel c,CompositionMode comp);
void CompositePixelNoClip(Bitmap *bitmap,int x,int y,Pixel c,CompositionMode comp);

Pixel ReadPixel(const Bitmap *bitmap,int x,int y);
Pixel ReadPixelNoClip(const Bitmap *bitmap,int x,int y);

void DrawHorizontalLine(Bitmap *bitmap,int x,int y,int len,Pixel c);
void DrawHorizontalLineNoClip(Bitmap *bitmap,int x,int y,int len,Pixel c);
void CompositeHorizontalLine(Bitmap *bitmap,int x,int y,int len,Pixel c,CompositionMode comp);
void CompositeHorizontalLineNoClip(Bitmap *bitmap,int x,int y,int len,Pixel c,CompositionMode comp);

void DrawVerticalLine(Bitmap *bitmap,int x,int y,int len,Pixel c);
void DrawVerticalLineNoClip(Bitmap *bitmap,int x,int y,int len,Pixel c);
void CompositeVerticalLine(Bitmap *bitmap,int x,int y,int len,Pixel c,CompositionMode comp);
void CompositeVerticalLineNoClip(Bitmap *bitmap,int x,int y,int len,Pixel c,CompositionMode comp);

void DrawLine(Bitmap *bitmap,int x1,int y1,int x2,int y2,Pixel c);
void DrawLineNoClip(Bitmap *bitmap,int x1,int y1,int x2,int y2,Pixel c);
void CompositeLine(Bitmap *bitmap,int x1,int y1,int x2,int y2,Pixel c,CompositionMode comp);
void CompositeLineNoClip(Bitmap *bitmap,int x1,int y1,int x2,int y2,Pixel c,CompositionMode comp);

void DrawRectangle(Bitmap *bitmap,int x,int y,int w,int h,Pixel c);
void DrawRectangleNoClip(Bitmap *bitmap,int x,int y,int w,int h,Pixel c);
void CompositeRectangle(Bitmap *bitmap,int x,int y,int w,int h,Pixel c,CompositionMode comp);
void CompositeRectangleNoClip(Bitmap *bitmap,int x,int y,int w,int h,Pixel c,CompositionMode comp);

void DrawFilledRectangle(Bitmap *bitmap,int x,int y,int w,int h,Pixel c);
void DrawFilledRectangleNoClip(Bitmap *bitmap,int x,int y,int w,int h,Pixel c);
void CompositeFilledRectangle(Bitmap *bitmap,int x,int y,int w,int h,Pixel c,CompositionMode comp);
void CompositeFilledRectangleNoClip(Bitmap *bitmap,int x,int y,int w,int h,Pixel c,CompositionMode comp);

void DrawCircle(Bitmap *bitmap,int x,int y,int r,Pixel c);
void DrawCircleNoClip(Bitmap *bitmap,int x,int y,int r,Pixel c);
void CompositeCircle(Bitmap *bitmap,int x,int y,int r,Pixel c,CompositionMode comp);
void CompositeCircleNoClip(Bitmap *bitmap,int x,int y,int r,Pixel c,CompositionMode comp);

void DrawFilledCircle(Bitmap *bitmap,int x,int y,int r,Pixel c);
void DrawFilledCircleNoClip(Bitmap *bitmap,int x,int y,int r,Pixel c);
void CompositeFilledCircle(Bitmap *bitmap,int x,int y,int r,Pixel c,CompositionMode comp);
void CompositeFilledCircleNoClip(Bitmap *bitmap,int x,int y,int r,Pixel c,CompositionMode comp);

void DrawBitmap(Bitmap *dest,const Bitmap *src,int x,int y);
void DrawBitmapNoClip(Bitmap *dest,const Bitmap *src,int x,int y);
void DrawPartialBitmap(Bitmap *dest,const Bitmap *src,int x,int y,int u,int v,int w,int h);
void DrawPartialBitmapNoClip(Bitmap *dest,const Bitmap *src,int x,int y,int u,int v,int w,int h);
void CompositeBitmap(Bitmap *dest,const Bitmap *src,int x,int y,CompositionMode comp);
void CompositeBitmapNoClip(Bitmap *dest,const Bitmap *src,int x,int y,CompositionMode comp);
void CompositePartialBitmap(Bitmap *dest,const Bitmap *src,int x,int y,int u,int v,int w,int h,CompositionMode comp);
void CompositePartialBitmapNoClip(Bitmap *dest,const Bitmap *src,int x,int y,int u,int v,int w,int h,CompositionMode comp);

#endif
