/*
*  Program Name: shapeJustinU.h
*  Written By: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/


#ifndef SHAPEJUSTINU_H
#define SHAPEJUSTINU_H

#include <iostream>
#include <string>
#include "FinalFractionJustinU.h"
#include "PointJustinU.h"

using namespace std;

class ShapeJustinU {
public:
	ShapeJustinU(void) {
		name = new string("Shape");
	}
	
	virtual ~ShapeJustinU(void) {
		delete name;
	}

	ShapeJustinU(string i) {
		name = new string(i);
	}

	ShapeJustinU(const ShapeJustinU& old) {
		name = new string(old.getName());
	}

	virtual ShapeJustinU& operator=(const ShapeJustinU& old) {
		setName(old.getName());

		return *this;
	}

	virtual string getName(void) const {
		return *name;
	}

	virtual void setName(string old) {
		*name = old;
		
		return;
	}

	virtual FinalFractionJustinU getArea(void) const = 0;

	virtual FinalFractionJustinU getVolume(void) const = 0;

	virtual ostream& printOut(ostream&) const = 0;

	friend ostream& operator<<(ostream& os, const ShapeJustinU& old) {
		return (old.printOut(os));
	}

protected:
	string* name;
};

#endif
