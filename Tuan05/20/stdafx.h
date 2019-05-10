﻿// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#ifndef _STDAFX_H_
#define _STDAFX_H_

#include "targetver.h"
#include <stdio.h>
#include <tchar.h>

struct Diem2d {
	double dX;
	double dY;
};
typedef Diem2d Diem2D;
struct DuongTron {
	Diem2D tam;
	double r;
};
typedef struct DuongTron DT;

//khởi tạo mảng 
void InitArr(DT *&arr1d, int n);
// nhập mảng
void InputArr(DT *&arr1d, int &n);
// ghi vào ma trận vào file text
void WriteFileText(FILE *f, DT *arr1d, int n);
// ghi vào ma trận vào file binary
void WriteFileBinary(FILE *f, DT *arr1d, int n);
// giải phóng mảng
void FreeMat(DT *&arr1d);
#endif


// TODO: reference additional headers your program requires here
