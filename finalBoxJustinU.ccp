/*
*  Program Name: FinalBoxJustinU.cpp
*  Written By: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/

#include <iostream>
#include "FinalFractionJustinU.h"
#include "PointJustinU.h"
#include "RectangleJustinU.h"
#include "BoxJustinU.h"

using namespace std;

FinalBoxJustinU::FinalBoxJustinU(void) : ShapeJustinU("Box"), FinalRectangleJustinU() {
	height = new FinalFractionJustinU(1);
	cout << "Creating Rectangle()" << endl;
	}

FinalBoxJustinU::~FinalBoxJustinU(void) {
	delete height;
	cout << "Deleting Rectangle()" << endl;
	}

FinalBoxJustinU::FinalBoxJustinU(FinalPointJustinU& uR, FinalPointJustinU& lL, FinalFractionJustinU& h) 
				: ShapeJustinU("Box"), FinalRectangleJustinU(uR, lL) {
	height = new FinalFractionJustinU(h);
	cout << "Creating Rectangle()" << endl;
	}

FinalBoxJustinU::FinalBoxJustinU(FinalPointJustinU& uR, FinalPointJustinU& lL, int h) 
				: ShapeJustinU("Box"), FinalRectangleJustinU(uR, lL) {
	height = new FinalFractionJustinU(h);
	cout << "Creating Rectangle()" << endl;
	}

FinalBoxJustinU::FinalBoxJustinU(const FinalRectangleJustinU& rec, const FinalFractionJustinU& h) 
				: ShapeJustinU("Box"), FinalRectangleJustinU(rec) {
	height = new FinalFractionJustinU(h);
	cout << "Creating Rectangle()" << endl;
}

FinalBoxJustinU::FinalBoxJustinU(const FinalBoxJustinU& old) : ShapeJustinU(old), FinalRectangleJustinU(old) {
	height = new FinalFractionJustinU(old.getHeight());
	cout << "Creating Rectangle()" << endl;
}

FinalBoxJustinU& FinalBoxJustinU::operator=(const FinalBoxJustinU& old) {
	setUpRight(old.getUpRight()); 
	setLowLeft(old.getLowLeft()); 
	setHeight(old.getHeight());
	setName(old.getName());
	cout << "Creating Rectangle()" << endl;

	return *this;
}

FinalFractionJustinU FinalBoxJustinU::getArea() const {
	return FinalFractionJustinU(((getLength() * getWidth()) + (getLength() * getHeight()) 
					+ (getWidth() * getHeight())) * 2);
}

FinalFractionJustinU FinalBoxJustinU::getVolume() const {
	return FinalFractionJustinU(getLength() * getWidth() * getHeight());
}

FinalFractionJustinU FinalBoxJustinU::getHeight() const {
	return (*height);
}

void FinalBoxJustinU::setHeight(const FinalFractionJustinU& value) {
	*height = value;

	return;
}

ostream& FinalBoxJustinU::printOut(ostream& os) const {
	os << "Shape of " << getName() << ":" << endl
		<< "Upper Right point of: " << getUpRight() << endl
		<< "Lower Left point of : " << getLowLeft() << endl
		<< "Height of           : " << getHeight() << endl
		<< "Area of             : " << getArea() << endl
		<< "Volume of           : " << getVolume() << endl;

	return os;
}
