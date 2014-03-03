/*
*  Program Name: RectangleJustinU.h
*  Written By: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/

#ifndef FINALRECTANGLEJUSTINU_H
#define FINALRECTANGLEJUSTINU_H

#include "FinalFractionJustinU.h"
#include "PointJustinU.h"
#include "shapeJustinU.h"
#include <iostream>

class FinalRectangleJustinU : public virtual ShapeJustinU {
public:

	FinalRectangleJustinU(void);
	~FinalRectangleJustinU(void);
	FinalRectangleJustinU(const FinalRectangleJustinU&);
	FinalRectangleJustinU(const FinalPointJustinU&, const FinalPointJustinU&);
	FinalRectangleJustinU(const FinalFractionJustinU&, const FinalFractionJustinU&);
	virtual FinalRectangleJustinU& operator=(const FinalRectangleJustinU&);
	FinalRectangleJustinU operator+(const FinalRectangleJustinU&);
	FinalFractionJustinU getArea(void) const;
	FinalFractionJustinU getVolume(void) const;
	FinalFractionJustinU getLength(void) const;
	FinalFractionJustinU getWidth(void) const;
	FinalPointJustinU getUpRight(void) const;
	FinalPointJustinU getLowLeft(void) const;
	void setUpRight(const FinalPointJustinU&);
	void setLowLeft(const FinalPointJustinU&);
	ostream& printOut(ostream&) const;

protected:
	FinalPointJustinU* upRight;
	FinalPointJustinU lowLeft;
};

#endif
