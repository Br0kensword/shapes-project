/*
*  Program Name: FinalCircleJustinU.cpp
*  Written By: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/

#include "CircleJustinU.h"
#include "FinalFractionJustinU.h"
#include "PointJustinU.h"
#include "ShapeJustinU.h"
#include <iostream>
using namespace std;


FinalCircleJustinU::FinalCircleJustinU(void) : ShapeJustinU("Circle"), PI(157, 50) {
	cen = new FinalPointJustinU();
	rad = FinalFractionJustinU();
	cout << "Creating Circle()" << endl;
}

FinalCircleJustinU::~FinalCircleJustinU(void) {
	delete cen;
	cout << "Deleting Circle()" << endl;
}

FinalCircleJustinU::FinalCircleJustinU(const FinalCircleJustinU& old) : ShapeJustinU("Circle"), PI(157, 50) {
	cen = new FinalPointJustinU(old.getCen());
	rad = FinalFractionJustinU(old.getRad());
	cout << "Creating Circle()" << endl;
}

FinalCircleJustinU::FinalCircleJustinU(const FinalPointJustinU& cen1, const FinalFractionJustinU& rad1) : ShapeJustinU("Circle"), PI(157, 50) {
	cen = new FinalPointJustinU(cen1);
	rad = FinalFractionJustinU(rad1);
	cout << "Creating Circle()" << endl;
}

FinalCircleJustinU::FinalCircleJustinU(const FinalFractionJustinU& rad1) : ShapeJustinU("Circle"), PI(157, 50) {
	cen = new FinalPointJustinU();
	rad = FinalFractionJustinU(rad1);
	cout << "Creating Circle()" << endl;
}

FinalCircleJustinU& FinalCircleJustinU::operator=(const FinalCircleJustinU& old) {
	setCen(old.getCen());
	setRad(old.getRad());
	cout << "Creating Circle()" << endl;

	return *this;
}

FinalCircleJustinU FinalCircleJustinU::operator+(const FinalCircleJustinU& old) {
	return FinalCircleJustinU(FinalPointJustinU(FinalFractionJustinU((old.getCen().getX() + getCen().getX()) / 2), FinalFractionJustinU((old.getCen().getY() + getCen().getY()) / 2)), (getRad() + old.getRad()));
}

FinalFractionJustinU FinalCircleJustinU::getArea() const {
	return (FinalFractionJustinU((getRad() * getRad()) * PI));
}

FinalFractionJustinU FinalCircleJustinU::getVolume() const {
	return FinalFractionJustinU(0);
}

FinalFractionJustinU FinalCircleJustinU::getRad() const {
	return rad;
}

FinalPointJustinU FinalCircleJustinU::getCen() const {
	return *cen;
}

void FinalCircleJustinU::setRad(const FinalFractionJustinU& old) {
	rad = old;

	return;
}

void FinalCircleJustinU::setCen(const FinalPointJustinU& old) {
	*cen = old;

	return;
}

void FinalCircleJustinU::print() const {
	cout << *this;

	return;
}

ostream& FinalCircleJustinU::printOut(ostream& os) const {
	os << "Shape of " << getName() << ":" << endl
		<< "Radius of: " << getRad() << endl
		<< "Center at: " << getCen() << endl
		<< "Area of  : " << getArea() << endl;

	return os;
}
