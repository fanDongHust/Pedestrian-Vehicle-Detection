/**
* [
*  Copyright (c) 2016 by Vehicle-Eye Technology
*  ALL RIGHTS RESERVED.
*
*  The software and information contained herein are proprietary to,  and comprise
*  valuable trade secrets of, Vehicle-Eye Technology.  Disclosure of the software
*  and information will materially harm the business of Vehicle-Eye Technology.
*  This software is furnished pursuant to a written development agreement and may
*  be used, copied, transmitted, and stored only in accordance with the terms of
*  such agreement and with the inclusion of the above copyright notice.  This
*  software and information or any other copies thereof may not be provided or
*  otherwise made available to any other party.
* ]
*/


/*!
* \file vetroi.cpp
* \author [Zeyu Zhang]
* \version [0.1]
* \date 2016-02-22
*/ 

#include "vetroi.h"

using namespace std;
using namespace cv;

VetROI::VetROI(Rect rect, string label): rect_(rect), label_(label)
{
	// ...
}

VetROI::~VetROI()
{
	// ...
}

// 返回检测矩形框右下角的坐标
Point VetROI::br() const
{
	return rect_.br();
}

// 返回检测矩形框左上角的坐标
Point VetROI::tl() const
{
	return rect_.tl();
}

// 返回检测矩形框
Rect VetROI::rect() const
{
	return rect_;
}

// 返回检测矩形框面积
int VetROI::area() const
{
	return rect_.area();
}

// 返回检测目标标签
string VetROI::label() const
{
	return label_;
}