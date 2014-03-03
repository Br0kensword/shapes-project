/*
*  Program Name: FinalCylinderJustinU.cpp
*  Written By: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/

#include <iostream>
#include "FinalFractionJustinU.h"
#include "PointJustinU.h"
#include "CircleJustinU.h"
#include "FinalCylinderJustinU.h"

using namespace std;

FinalCylinderJustinU::FinalCylinderJustinU(void) : ShapeJustinU("Cylinder"), FinalCircleJustinU() {
	height = new FinalFractionJustinU(1);
	cout << "Creating Cylinder()" << endl;
}

FinalCylinderJustinU::~FinalCylinderJustinU(void) {
	delete height;
	cout << "Creating Cylinder()" << endl;
}

FinalCylinderJustinU::FinalCylinderJustinU(const FinalCylinderJustinU& old) : ShapeJustinU("Cylinder"), FinalCircleJustinU(old) {
	height = new FinalFractionJustinU(old.getHeight());
	cout << "Creating Cylinder()" << endl;
}

FinalCylinderJustinU::FinalCylinderJustinU(const FinalPointJustinU& cen1, const FinalFractionJustinU& rad1, const FinalFractionJustinU& h) : ShapeJustinU("Cylinder"), FinalCircleJustinU(cen1, rad1) {
	height = new FinalFractionJustinU(h);
	cout << "Creating Cylinder()" << endl;
}

FinalCylinderJustinU::FinalCylinderJustinU(const FinalCircleJustinU& oldC, const FinalFractionJustinU& h) : ShapeJustinU("Cylinder"), FinalCircleJustinU(oldC) {
	height = new FinalFractionJustinU(h);
	cout << "Creating Cylinder()" << endl;
}

FinalCylinderJustinU& FinalCylinderJustinU::operator=(const FinalCylinderJustinU& old) {
	*height = old.getHeight();
	setCen(old.getCen());
	setRad(old.getRad());
	cout << "Creating Cylinder()" << endl;

	return *this;
}

FinalCylinderJustinU FinalCylinderJustinU::operator+(const FinalCylinderJustinU& old) {
	FinalFractionJustinU tempH, tempR;
	FinalPointJustinU tempP;

	if (getHeight() > old.getHeight())
		tempH = old.getHeight();
	else
		tempH = getHeight();

	if (getRad() > old.getRad())
		tempR = getRad();
	else
		tempR = old.getRad();

	tempP = FinalPointJustinU(FinalFractionJustinU((old.getCen().getX() + getCen().getX()) / 2), FinalFractionJustinU((old.getCen().getY() + getCen().getY()) / 2));

	return FinalCylinderJustinU(tempP, tempR, tempH);
}

FinalFractionJustinU FinalCylinderJustinU::getArea(void) const {
	return FinalFractionJustinU((PI * getRad() * getRad() * 2) + (PI * getHeight() * getRad() * 2));
}

FinalFractionJustinU FinalCylinderJustinU::getVolume(void) const {
	return FinalFractionJustinU(PI * getHeight() * getRad() * getRad());
}

FinalFractionJustinU FinalCylinderJustinU::getHeight(void) const {
	return *height;
}

void FinalCylinderJustinU::setHeight(const FinalFractionJustinU& value) {
	*height = value;

	return;
}

ostream& FinalCylinderJustinU::printOut(ostream& os) const {
	os << "Shape of " << getName() << ":" << endl
		<< "Radius of: " << getRad() << endl
		<< "Height of: " << getHeight() << endl
		<< "Center at: " << getCen() << endl
		<< "Area of  : " << getArea() << endl
		<< "Volume of: " << getVolume() << endl;

	return os;
}
