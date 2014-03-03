/*
*  Program Name: FinalFractionJustinU.cpp
*  Written by: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/

#include <iostream>
#include "finalFractionJustinU.h"

using namespace std;

//Default constructor
FinalFractionJustinU::FinalFractionJustinU(void) { 
	num = new int(0);
	denom = new int(1);
	cout << "Creating Fraction()" << endl;
}

//Constructor for inputs
FinalFractionJustinU::FinalFractionJustinU(int a, int b) {
	num = new int(a);
	denom = new int(1);
	setDenom(b);
	reduce();
	cout << "Creating Fraction()" << endl;
}

//Conversion Constructor
FinalFractionJustinU::FinalFractionJustinU(int a) { 
	num = new int(a);
	denom = new int(1);
	cout << "Creating Fraction()" << endl;
}

//Copy Constructor
FinalFractionJustinU::FinalFractionJustinU(const FinalFractionJustinU& old) {
	num = new int(old.getNum());
	denom = new int(old.getDenom());
	cout << "Creating Fraction()" << endl;
}

//Destructor
FinalFractionJustinU::~FinalFractionJustinU() {
	delete num;
	delete denom;
	cout << "Deleting Fraction()" << endl;
}

//Get numerator
int FinalFractionJustinU::getNum(void) const { 
	return *num;
}

//Get denominator
int FinalFractionJustinU::getDenom(void) const { 
	return *denom;
}

//Set numerator
void FinalFractionJustinU::setNum(int n) { 
	*num = n;
}

//Set denominator
void FinalFractionJustinU::setDenom(int d) { 
	if (d != 0) {
		*denom = d;

		if (*denom < 0) {
			*denom = -*(denom);
			*num = -*(num);
		}
	} else {
		cout << "\n\n\tERROR! ATTEMPT TO DIVIDE BY ZERO!" << endl 
			<< "\nDenominator set to (1) by default!" << endl;
	}
}

//Find and return the Least Common Denominator of the object
int FinalFractionJustinU::lCD(int n, int d) const { 

	if (n % d) 
		return lCD(d, (n % d));
	else {
		(d < 0) ? d = -d : d = d;
		return d;
	}
}

//Returns a reduced fraction object based off of the LCD
FinalFractionJustinU& FinalFractionJustinU::reduce(void) { 
	int lcd = lCD(getNum(), getDenom());

	setNum(getNum() / lcd);
	setDenom(getDenom() / lcd);

	return *this;
}

void FinalFractionJustinU::update(int n, int d) {
	setNum(n);
	setDenom(d);
}

//Returns the addition of this and another fraction
FinalFractionJustinU FinalFractionJustinU::operator+(const FinalFractionJustinU& old) const { 

	return FinalFractionJustinU(((getNum() * old.getDenom()) + (old.getNum() * getDenom())), (getDenom() * old.getDenom()));
}

//Returns the subtraction of this and another fraction
FinalFractionJustinU FinalFractionJustinU::operator-(const FinalFractionJustinU& old) const {

	return FinalFractionJustinU(((getNum() * old.getDenom()) - (old.getNum() * getDenom())), (getDenom() * old.getDenom()));
}

//Returns the multiplication of this and another fraction
FinalFractionJustinU FinalFractionJustinU::operator*(const FinalFractionJustinU& old) const { 

	return FinalFractionJustinU((getNum() * old.getNum()), (getDenom() * old.getDenom()));
}

//Returns the division of this and another fraction
FinalFractionJustinU FinalFractionJustinU::operator/(const FinalFractionJustinU& old) const { 

	return FinalFractionJustinU((getNum() * old.getDenom()), (getDenom() * old.getNum()));
}

FinalFractionJustinU FinalFractionJustinU::operator/(int old) const {

	return FinalFractionJustinU(getNum(), (getDenom() * old));
}

FinalFractionJustinU& FinalFractionJustinU::operator+=(const FinalFractionJustinU& old) {
	setNum((getNum() * old.getDenom()) + (old.getNum() * getDenom()));
	setDenom(getDenom() * old.getDenom());
	reduce();

	return *this;
}

FinalFractionJustinU& FinalFractionJustinU::operator+=(int old) {
	setNum(getNum() + (old * getDenom()));
	reduce();

	return *this;
}

//Returns the value of the updated left hand side of the argument
FinalFractionJustinU& FinalFractionJustinU::operator=(const FinalFractionJustinU& old) {
	setNum(old.getNum());
	setDenom(old.getDenom());
	reduce();

	return *this;
}

FinalFractionJustinU& FinalFractionJustinU::operator=(int old) {
	setNum(old);
	setDenom(1);

	return *this;
}

FinalFractionJustinU FinalFractionJustinU::operator-(void) const {

	return FinalFractionJustinU(-(getNum()), getDenom());
}

bool FinalFractionJustinU::operator>(const FinalFractionJustinU& old) const {

	return ((getNum() * old.getDenom()) > (old.getNum() * getDenom()));
}

bool FinalFractionJustinU::operator<(const FinalFractionJustinU& old) const {

	return ((getNum() * old.getDenom()) < (old.getNum() * getDenom()));
}

bool FinalFractionJustinU::operator==(int old) const {
	return (getNum() == (getDenom() * old));
}

ostream& operator<<(ostream& os, const FinalFractionJustinU& old) {
	os << old.getNum() << " / " << old.getDenom();

	return os;
}

istream& operator>>(istream& is, FinalFractionJustinU& old) {
	bool check = false;

	cout << "\nNumerator: ";
	is >> *(old.num);

	do {
		if (check)
			cout << "\nThe denominator cannot be zero! Please try again." << endl;
		cout << "Denominator: ";
		is >> *(old.denom);
		check = true;   
	} while (*(old.denom) == 0);

	old.setDenom(old.getDenom());
	old.reduce();

	return is;
}
