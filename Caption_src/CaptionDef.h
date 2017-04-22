﻿#ifndef INCLUDE_CAPTION_DEF_H
#define INCLUDE_CAPTION_DEF_H

typedef struct {
	unsigned char ucR;
	unsigned char ucG;
	unsigned char ucB;
	unsigned char ucAlpha;
} CLUT_DAT_DLL;

typedef struct {
	const void* pszDecode; //char* or WCHAR*
	DWORD wCharSizeMode;

	CLUT_DAT_DLL stCharColor;
	CLUT_DAT_DLL stBackColor;
	CLUT_DAT_DLL stRasterColor;

	BOOL bUnderLine;
	BOOL bShadow;
	BOOL bBold;
	BOOL bItalic;
	BYTE bFlushMode;
	BYTE bHLC; //must ignore low 4bits

	WORD wCharW;
	WORD wCharH;
	WORD wCharHInterval;
	WORD wCharVInterval;
	BYTE bPRA; //PRA+1
	BYTE bAlignment; //zero cleared
} CAPTION_CHAR_DATA_DLL;

typedef struct {
	BOOL bClear;
	WORD wSWFMode;
	WORD wClientX;
	WORD wClientY;
	WORD wClientW;
	WORD wClientH;
	WORD wPosX;
	WORD wPosY;
	WORD wAlignment; //zero cleared
	DWORD dwListCount;
	CAPTION_CHAR_DATA_DLL* pstCharList;
	DWORD dwWaitTime;
} CAPTION_DATA_DLL;

typedef struct {
	unsigned char ucLangTag;
	unsigned char ucDMF;
	unsigned char ucDC;
	char szISOLangCode[4];
	unsigned char ucFormat;
	unsigned char ucTCS;
	unsigned char ucRollupMode;
}LANG_TAG_INFO_DLL;

typedef struct {
	DWORD dwDRCCode;
	DWORD dwUCS;
	WORD wGradation;
	WORD wReserved; //zero cleared
	DWORD dwReserved; //zero cleared
	BITMAPINFOHEADER bmiHeader;
	const BYTE* pbBitmap;
}DRCS_PATTERN_DLL;

#endif
