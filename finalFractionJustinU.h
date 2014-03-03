/*
*  Program Name: FinalFractionJustinU.h
*  Written By: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/

#ifndef FINALFRACTIONJUSTINU_H
#define FINALFRACTIONJUSTINU_H
#include <iostream>

class FinalFractionJustinU {
public:

	FinalFractionJustinU(void);
	FinalFractionJustinU(int, int);
	FinalFractionJustinU(int);
	FinalFractionJustinU(const FinalFractionJustinU&);
	~FinalFractionJustinU(void);
	int getNum(void) const;
	int getDenom(void) const;
	void setNum(int);
	void setDenom(int);
	int lCD(int, int) const;
	void update(int, int);
	FinalFractionJustinU& reduce(void);
	FinalFractionJustinU operator+(const FinalFractionJustinU&) const;
	FinalFractionJustinU operator-(const FinalFractionJustinU&) const;
	FinalFractionJustinU operator-(void) const;
	FinalFractionJustinU operator*(const FinalFractionJustinU&) const;
	FinalFractionJustinU operator/(const FinalFractionJustinU&) const;
	FinalFractionJustinU operator/(int) const;
	FinalFractionJustinU& operator+=(const FinalFractionJustinU&);
	FinalFractionJustinU& operator+=(int);
	FinalFractionJustinU& operator=(const FinalFractionJustinU&);
	FinalFractionJustinU& operator=(int);
	bool operator==(int old) const;
	bool operator>(const FinalFractionJustinU&) const;
	bool operator<(const FinalFractionJustinU&) const;
	friend std::ostream& operator<<(std::ostream&, const FinalFractionJustinU&);
	friend std::istream& operator>>(std::istream&, FinalFractionJustinU&);

private:

	int* num;
	int* denom;
};

#endif
