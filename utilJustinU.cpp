/*
*  Program Name: utilJustinU.cpp
*  Written by: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/


#include <iostream>
#include "FinalFractionJustinU.h"
#include "CircleJustinU.h"
#include "RectangleJustinU.h"
#include "utilJustinU.h"
#include "BoxJustinU.h"
#include "FinalCylinderJustinU.h"

using namespace std;

void infoOut() {

	cout << "Class Information --" 
		<< "\n  CIS 25 - C++ Programming"
		<< "\n  Laney College"
		<< "\n\nAssignment Information --"
		<< "\n  Assignment Number:  Final"
		<< "\n  Written By:         Justin Unverricht"
		<< "\n  Due Date:           12/13/2013"
		<< "\n\n"
		<< endl;

	return;
}

void swap(ShapeJustinU*& obj1, ShapeJustinU*& obj2) {
	ShapeJustinU* temp;

	temp = obj1;
	obj1 = obj2;
	obj2 = temp;

	return;
}

void printObj(ShapeJustinU** objAry, int size, string name, int single) {
	for (int i = 0; i < size; i++) {
		if (((*(objAry + i))->getName() == name) || (name == "all")) {
			cout << (**(objAry + i)) << endl;
			if (single)
				i = size;
		}
	}

	return;
}

void getSecondLargestAreaJustinU(ShapeJustinU**& objAry, int size, string pString, int single) {
	bool finished = false;

	while (!finished) {
		finished = true;
		for (int i = 0; i < size - 1; i++) {
			if (((*(objAry + i))->getArea()) < ((*(objAry + i + 1))->getArea())) {
				swap((*(objAry + i)), (*(objAry + i + 1)));
				finished = false;
			}
		}
	}
	
	printObj(objAry, size, pString, single);

	return;
}


void getSecondSmallestVolumeJustinU(ShapeJustinU**& objAry, int size, string pString, int single) {
	bool finished = false;

	while (!finished) {
		finished = true;
		for (int i = 0; i < size - 1; i++) {
			if (((*(objAry + i))->getVolume()) > ((*(objAry + i + 1))->getVolume())) {
				swap((*(objAry + i)), (*(objAry + i + 1)));
				finished = false;
			}
		}
	}

	for (int i = size - 1; i > 0; i--) {
		if ((*(objAry + i))->getVolume() == 0){
			swap((*(objAry + i + 1)), (*(objAry)));
			i = -1;
		}
	}

	printObj(objAry, size, pString, single);

	return;
}

void displayAreaJustinU(ShapeJustinU**& objAry, int size, string pString, int single) {
	bool finished = false;

	while (!finished) {
		finished = true;
		for (int i = 0; i < size - 1; i++) {
			if (((*(objAry + i))->getArea()) > ((*(objAry + i + 1))->getArea())) {
				swap((*(objAry + i)), (*(objAry + i + 1)));
				finished = false;
			}
		}
	}
	
	printObj(objAry, size, pString, single);

	return;
}

void displayVolumeJustinU(ShapeJustinU**& objAry, int size, string pString, int single) {
	bool finished = false;

	while (!finished) {
		finished = true;
		for (int i = 0; i < size - 1; i++) {
			if (((*(objAry + i))->getVolume()) > ((*(objAry + i + 1))->getVolume())) {
				swap((*(objAry + i)), (*(objAry + i + 1)));
				finished = false;
			}
		}
	}
	
	printObj(objAry, size, pString, single);

	return;
}
