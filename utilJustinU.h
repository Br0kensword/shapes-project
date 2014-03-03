/*
*  Program Name: utilJustinU.cpp
*  Written by: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 6 Ex 1
*/

#ifndef utilJustinU_H
#define utilJustinU_H
#include "RectangleJustinU.h"
#include "CircleJustinU.h"
#include "BoxJustinU.h"
#include "FinalCylinderJustinU.h"

void infoOut(void);
void getSecondLargestAreaJustinU(ShapeJustinU**&, int, string, int);
void getSecondSmallestVolumeJustinU(ShapeJustinU**&, int, string, int);
void displayAreaJustinU(ShapeJustinU**&, int, string, int);
void displayVolumeJustinU(ShapeJustinU**&, int, string, int);
void displayOrigin(ShapeJustinU**&, int, string, int);
void swap(ShapeJustinU*&, ShapeJustinU*&);
void printObj(ShapeJustinU**, int, string, int);

#endif
