/*
*  Program Name: PointJustinU.h
*  Written By: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/

#ifndef FINALPOINTJUSTINU_H
#define FINALPOINTJUSTINU_H
#include "FinalFractionJustinU.h"
#include <iostream>

class FinalPointJustinU {
public:

	FinalPointJustinU(void);
	~FinalPointJustinU(void);
	FinalPointJustinU(const FinalFractionJustinU&, const FinalFractionJustinU&);
	FinalPointJustinU(int, int);
	FinalPointJustinU(const FinalPointJustinU&);
	FinalPointJustinU& operator=(const FinalPointJustinU&);
	FinalPointJustinU& operator+(const FinalPointJustinU&);
	void moveBy(FinalFractionJustinU&, FinalFractionJustinU&);
	void moveBy(int);
	void flipByX();
	void flipByY();
	void flipThroughOrigin();
	FinalFractionJustinU getX(void) const;
	FinalFractionJustinU getY(void) const;
	void setX(FinalFractionJustinU&);
	void setY(FinalFractionJustinU&);
	friend std::ostream& operator<<(std::ostream&, const FinalPointJustinU&);
	friend std::istream& operator>>(std::istream&, FinalPointJustinU&);

private:
	FinalFractionJustinU x;
	FinalFractionJustinU y;
};

#endif
