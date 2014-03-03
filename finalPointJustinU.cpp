/*
*  Program Name: FinalPointJustinU.cpp
*  Written By: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/
#include "PointJustinU.h"
using namespace std;

FinalPointJustinU::FinalPointJustinU(void) {
	x = FinalFractionJustinU();
	y = FinalFractionJustinU();
	cout << "Creating Point()" << endl;
}

FinalPointJustinU::~FinalPointJustinU(void) {
	cout << "Deleting Point()" << endl;
}

FinalPointJustinU::FinalPointJustinU(const FinalFractionJustinU& run, const FinalFractionJustinU& rise) {
	x = FinalFractionJustinU(run);
	y = FinalFractionJustinU(rise);
	cout << "Creating Point()" << endl;
}

FinalPointJustinU::FinalPointJustinU(int run, int rise) {
	x = FinalFractionJustinU(run);
	y = FinalFractionJustinU(rise);
	cout << "Creating Point()" << endl;
}

FinalPointJustinU::FinalPointJustinU(const FinalPointJustinU& old) {
	x = FinalFractionJustinU(old.getX());
	y = FinalFractionJustinU(old.getY());
	cout << "Creating Point()" << endl;
}

FinalPointJustinU& FinalPointJustinU::operator=(const FinalPointJustinU& old) {
	setX(old.getX());
	setY(old.getY());
	cout << "Creating Point()" << endl;

	return *this;
}


void FinalPointJustinU::moveBy(FinalFractionJustinU& delX, FinalFractionJustinU& delY) { 
	setX(getX() + delX);
	setY(getY() + delY);

	return;
} 

void FinalPointJustinU::moveBy(int iOld) {
	setX(getX() + iOld);
	setY(getY() + iOld);

	return;
} 

void FinalPointJustinU::flipByX() {
	setX(-(getX()));

	return;
} 

void FinalPointJustinU::flipByY() { 
	setY(-(getY()));

	return;
} 

void FinalPointJustinU::flipThroughOrigin() { 
	setX(-(getX()));
	setY(-(getY()));

	return;
} 

FinalFractionJustinU FinalPointJustinU::getX() const {
	return x;
}

FinalFractionJustinU FinalPointJustinU::getY() const {
	return y;
}

	void FinalPointJustinU::setX(FinalFractionJustinU& old) {
		x = old;

		return;
	}

	void FinalPointJustinU::setY(FinalFractionJustinU& old) {
		y = old;

		return;
	}

ostream& operator<<(ostream& os, const FinalPointJustinU& old) {
	os << "(" << old.getX() << ", " << old.getY() << ")";

	return os;
}

istream& operator>>(istream& is, FinalPointJustinU& old) {
	cout << "\nInput X coordintate: \n";
	is >> (old.x);
	cout << "\nInput Y coordinate: \n";
	is >> (old.y);

	return is;
}
