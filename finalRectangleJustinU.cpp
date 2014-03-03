/*
*  Program Name: FinalRectangleJustinU.cpp
*  Written By: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/

#include "RectangleJustinU.h"
#include "PointJustinU.h"
#include "FinalFractionJustinU.h"
#include "shapeJustinU.h"
#include <iostream>

using namespace std;

FinalRectangleJustinU::FinalRectangleJustinU() : ShapeJustinU("Rectangle") {
	upRight = new FinalPointJustinU();
	lowLeft = FinalPointJustinU();
}

FinalRectangleJustinU::~FinalRectangleJustinU() {
	delete upRight;
}

FinalRectangleJustinU::FinalRectangleJustinU(const FinalRectangleJustinU& old) : ShapeJustinU("Rectangle") {
	upRight = new FinalPointJustinU(old.getUpRight());
	lowLeft = FinalPointJustinU(old.getLowLeft());
}

FinalRectangleJustinU::FinalRectangleJustinU(const FinalPointJustinU& upR, const FinalPointJustinU& lowL) : ShapeJustinU("Rectangle") {
	upRight = new FinalPointJustinU(upR);
	lowLeft = FinalPointJustinU(lowL);
}

FinalRectangleJustinU::FinalRectangleJustinU(const FinalFractionJustinU& length, const FinalFractionJustinU& width) : ShapeJustinU("Rectangle") {
	upRight = new FinalPointJustinU(length, width);
	lowLeft = FinalPointJustinU();
}

FinalRectangleJustinU& FinalRectangleJustinU::operator=(const FinalRectangleJustinU& old) {
	setUpRight(old.getUpRight());
	setLowLeft(old.getLowLeft());

	return *this; 
}

FinalRectangleJustinU FinalRectangleJustinU::operator+(const FinalRectangleJustinU& old) {
	return FinalRectangleJustinU(FinalPointJustinU(FinalFractionJustinU((old.getUpRight().getX() + getLowLeft().getX()) / 2), (old.getUpRight().getY() + getLowLeft().getY()) / 2)
		,FinalPointJustinU(FinalFractionJustinU(old.getUpRight().getX() + getLowLeft().getX() / 2), (old.getUpRight().getY() + old.getLowLeft().getY())));
}
         
FinalFractionJustinU FinalRectangleJustinU::getArea() const {
	FinalFractionJustinU temp((getUpRight().getX() - getLowLeft().getX()) * (getUpRight().getY() - getLowLeft().getY()));

	if (temp > 0)
		return temp;
	else
		return -temp;
}

FinalFractionJustinU FinalRectangleJustinU::getVolume() const {
	return FinalFractionJustinU(0);
}

FinalFractionJustinU FinalRectangleJustinU::getLength() const {
	if ((getUpRight().getX() - getLowLeft().getX()) > (getUpRight().getY() - getLowLeft().getY()))
		return (getUpRight().getX() - getLowLeft().getX());
	else
		return (getUpRight().getY() - getLowLeft().getY());
}

FinalFractionJustinU FinalRectangleJustinU::getWidth() const {
	if ((getUpRight().getX() - getLowLeft().getX()) < (getUpRight().getY() - getLowLeft().getY()))
		return (getUpRight().getX() - getLowLeft().getX());
	else
		return (getUpRight().getY() - getLowLeft().getY());
}

FinalPointJustinU FinalRectangleJustinU::getUpRight() const {
	return *upRight;
}

FinalPointJustinU FinalRectangleJustinU::getLowLeft() const {
	return lowLeft;
}

void FinalRectangleJustinU::setUpRight(const FinalPointJustinU& old) {
	*upRight = old;

	return;
}
void FinalRectangleJustinU::setLowLeft(const FinalPointJustinU& old) {
	lowLeft = old;

	return;
}

ostream& FinalRectangleJustinU::printOut(ostream& os) const {
	os << "Shape of " << getName() << ":" << endl
		<< "Upper right point at: " << getUpRight() << endl
		<< "Lower left point at : " << getLowLeft() << endl
		<< "Area of             : " << getArea() << endl;

	return os;
}
