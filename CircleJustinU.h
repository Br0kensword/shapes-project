/*
*  Program Name: CircleJustinU.h
*  Written By: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/

#ifndef FINALCIRCLEJUSTINU_H
#define FINALCIRCLEJUSTINU_H

#include "FinalFractionJustinU.h"
#include "PointJustinU.h"
#include "shapeJustinU.h"
#include <iostream>

class FinalCircleJustinU : public virtual ShapeJustinU {
public:

	FinalCircleJustinU(void);
	~FinalCircleJustinU(void);
	FinalCircleJustinU(const FinalCircleJustinU&);
	FinalCircleJustinU(const FinalPointJustinU&, const FinalFractionJustinU&);
	FinalCircleJustinU(const FinalFractionJustinU&);
	FinalCircleJustinU& operator=(const FinalCircleJustinU&);
	FinalCircleJustinU operator+(const FinalCircleJustinU&);
	FinalFractionJustinU getArea(void) const;
	FinalFractionJustinU getVolume(void) const;
	FinalFractionJustinU getRad(void) const;
	FinalPointJustinU getCen(void) const;
	void setRad(const FinalFractionJustinU&);
	void setCen(const FinalPointJustinU&);
	void print(void) const;
	ostream& printOut(ostream&) const;

protected:
	FinalPointJustinU* cen;
	FinalFractionJustinU rad;
	const FinalFractionJustinU PI;
};

#endif
