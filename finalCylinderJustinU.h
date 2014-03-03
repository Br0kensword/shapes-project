/*
*  Program Name: FinalCylinderJustinU.h
*  Written By: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/

#ifndef FinalCylinderJustinU_H
#define FinalCylinderJustinU_H

#include <iostream>
#include "FinalFractionJustinU.h"
#include "PointJustinU.h"
#include "CircleJustinU.h"

using namespace std;

class FinalCylinderJustinU : public FinalCircleJustinU {
public:
	FinalCylinderJustinU(void);
	~FinalCylinderJustinU(void);
	FinalCylinderJustinU(const FinalCylinderJustinU&);
	FinalCylinderJustinU(const FinalPointJustinU&, const FinalFractionJustinU&, const FinalFractionJustinU&);
	FinalCylinderJustinU(const FinalCircleJustinU& oldC, const FinalFractionJustinU& h);
	FinalCylinderJustinU& operator=(const FinalCylinderJustinU&);
	FinalCylinderJustinU operator+(const FinalCylinderJustinU&);
	FinalFractionJustinU getArea(void) const;
	FinalFractionJustinU getVolume(void) const;
	FinalFractionJustinU getHeight(void) const;
	void setHeight(const FinalFractionJustinU& value);
	ostream& printOut(ostream&) const;

private:
	FinalFractionJustinU* height;
};

#endif
