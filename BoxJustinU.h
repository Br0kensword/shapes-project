/*
*  Program Name: BoxJustinU.h
*  Written By: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/

#ifndef FINALBOXJUSTINU_H
#define FINALBOXJUSTINU_H

#include <iostream>
#include "FinalFractionJustinU.h"
#include "PointJustinU.h"
#include "RectangleJustinU.h"

using namespace std;

class FinalBoxJustinU : public FinalRectangleJustinU {
public:

	FinalBoxJustinU(void);
	~FinalBoxJustinU(void);
	FinalBoxJustinU(FinalPointJustinU&, FinalPointJustinU&, FinalFractionJustinU&);
	FinalBoxJustinU(FinalPointJustinU&, FinalPointJustinU&, int);
	FinalBoxJustinU(const FinalRectangleJustinU&, const FinalFractionJustinU&);
	FinalBoxJustinU(const FinalBoxJustinU&);
	FinalBoxJustinU& operator=(const FinalBoxJustinU&);
	FinalFractionJustinU getArea(void) const;
	FinalFractionJustinU getVolume(void) const;
	FinalFractionJustinU getHeight(void) const;
	void setHeight(const FinalFractionJustinU& value);
	ostream& printOut(ostream&) const;

private:
	FinalFractionJustinU* height;
};

#endif
