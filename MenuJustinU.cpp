/*
*  Program Name: menuJustinU.cpp
*  Written by: Justin Unverricht
*  Date: 11/26/13
*  Part of Project: Lab 7 Ex 1
*/

#include <iostream>
#include "FinalFractionJustinU.h"
#include "CircleJustinU.h"
#include "RectangleJustinU.h"
#include "utilJustinU.h"
#include "menuJustinU.h"
#include "BoxJustinU.h"
#include "FinalCylinderJustinU.h"

using namespace std;

void menu() {
	ShapeJustinU **shapePtrAry = new ShapeJustinU*[8];

	for (int i = 0; i < 8; i++) {
		*(shapePtrAry + i) = NULL;
	}


	cout << "Starting at Line 1000:" << endl; // Line 1000 
	FinalFractionJustinU* fPtrA =

	new FinalFractionJustinU(8, 1); // Line 1100

	cout << *fPtrA << endl; // display the information of the above object

	FinalFractionJustinU* fPtrB =

		new FinalFractionJustinU(2, 1); // Line 1200

	cout << *fPtrB << endl; // display the information of the above object

	FinalFractionJustinU* fPtrC =

		new FinalFractionJustinU(3, 1); // Line 1300

	cout << *fPtrC << endl; // display the information of the above object

	FinalFractionJustinU* fPtrD =

		new FinalFractionJustinU(6, 1); // Line 1400

	cout << *fPtrD << endl; // display the information of the above object

	FinalFractionJustinU* fPtrE =

		new FinalFractionJustinU(-8, 1); // Line 1500

	cout << *fPtrE << endl; // display the information of the above object

	FinalFractionJustinU* fPtrF =

		new FinalFractionJustinU(-2, 1); // Line 1600

	cout << *fPtrF << endl; // display the information of the above object

	FinalFractionJustinU* fPtrG =

		new FinalFractionJustinU(-3, 1); // Line 1700

	cout << *fPtrG << endl; // display the information of the above object

	FinalFractionJustinU* fPtrH =

		new FinalFractionJustinU(-6, 1); // Line 1800

	cout << *fPtrH << endl; // display the information of the above object

	cout << "Starting at Line 2000:" << endl; // Line 2000 
	FinalPointJustinU* pPtrA =

	new FinalPointJustinU(*fPtrA, *fPtrB); // Line 2100

	cout << *pPtrA << endl; // display the information of the above object

	FinalPointJustinU* pPtrB =

		new FinalPointJustinU(*fPtrB, *fPtrC); // Line 2200

	cout << *pPtrB << endl; // display the information of the above object

	FinalPointJustinU* pPtrC =

		new FinalPointJustinU(*fPtrC, *fPtrD); // Line 2300

	cout << *pPtrC << endl; // display the information of the above object

	FinalPointJustinU* pPtrD =

		new FinalPointJustinU(*fPtrD, *fPtrE); // Line 2400

	cout << *pPtrD << endl; // display the information of the above object

	FinalPointJustinU* pPtrE =

		new FinalPointJustinU (*fPtrE, *fPtrF); // Line 2500

	cout << *pPtrE << endl; // display the information of the above object

	FinalPointJustinU* pPtrF =

		new FinalPointJustinU (*fPtrF, *fPtrG); // Line 2600

			cout << *pPtrF << endl; // display the information of the above object

	FinalPointJustinU* pPtrG =

		new FinalPointJustinU (*fPtrG, *fPtrH); // Line 2700

	cout << *pPtrG << endl; // display the information of the above object

	FinalPointJustinU* pPtrH =

		new FinalPointJustinU (*fPtrH, *fPtrA); // Line 2800

	// These are the shapes from final implementation prep might need to change according to final

	cout << *pPtrH << endl; // display the information of the above object 

	FinalCircleJustinU* cPtrA = new FinalCircleJustinU(*pPtrA,*fPtrA); // Line 2000 

	cout << *cPtrA << endl; // display the information of the above object 

	FinalCircleJustinU* cPtrB = new FinalCircleJustinU(*pPtrH,*fPtrD); // Line 2100 

	cout << *cPtrB << endl; // display the information of the above object 

	FinalCircleJustinU* cPtrC = new FinalCircleJustinU(*pPtrG,*fPtrC); // Line 2200 

	cout << *cPtrC << endl; // display the information of the above object 

	FinalCircleJustinU* cPtrD = new FinalCircleJustinU(*cPtrA + *cPtrB); // Line 2200 

	cout << *cPtrC << endl; // display the information of the above object 

	cout << "\nStarting at Line 2680:" << endl; // Line 2680 

	FinalCylinderJustinU* cyPtrA = new FinalCylinderJustinU(*cPtrA, *fPtrB); // Line 3000 

	cout << *cyPtrA << endl; // display the information of the above object 

	FinalCylinderJustinU* cyPtrB = new FinalCylinderJustinU(*cPtrB, *fPtrC); // Line 3100 

	cout << *cyPtrB << endl; // display the information of the above object 

	FinalCylinderJustinU* cyPtrC = new FinalCylinderJustinU(*cPtrC, *fPtrA); // Line 3200 

	cout << *cyPtrC << endl; // display the information of the above object 

	cout << "\nStarting at Line 3300:" << endl; // Line 3300 

	FinalRectangleJustinU* rPtrA = new FinalRectangleJustinU(*pPtrC, *pPtrB); // Line 3400 

	cout << *rPtrA << endl; // display the information of the above object 

	FinalRectangleJustinU* rPtrB = new FinalRectangleJustinU(*pPtrG, *pPtrF); // Line 3500 

	cout << *rPtrB << endl; // display the information of the above object

	FinalRectangleJustinU* rPtrC = new FinalRectangleJustinU(*pPtrB, *pPtrE); // Line 3600 

	cout << *rPtrC << endl; // display the information of the above object 

	cout << "\nStarting at Line 3650:" << endl; // Line 3650 

	FinalRectangleJustinU* rPtrD = new FinalRectangleJustinU(*rPtrA + *rPtrB); // Line 3600 

	cout << *rPtrC << endl; // display the information of the above object 

	cout << "\nStarting at Line 3650:" << endl; // Line 3650 


	FinalBoxJustinU* boxPtrA = new FinalBoxJustinU(*rPtrC, *fPtrA); // Line 3700 

	cout << *boxPtrA << endl; // display the information of the above object 

	FinalBoxJustinU* boxPtrB = new FinalBoxJustinU(*rPtrB, *fPtrC); // Line 3800 

	cout << *boxPtrB << endl; // display the information of the above object 

	FinalBoxJustinU* boxPtrC = new FinalBoxJustinU(*rPtrA, *fPtrB); // Line 3700 

	cout << *boxPtrC << endl; // display the information of the above object 

	int option; // Line 3800 

	// Set up storage structures (for example, dynamic arrays)

	ShapeJustinU** allAry = new ShapeJustinU*[12];
	*(allAry + 0) = boxPtrA;
	*(allAry + 1) = boxPtrB;
	*(allAry + 2) = boxPtrC;
	*(allAry + 3) = rPtrA;
	*(allAry + 4) = rPtrB;
	*(allAry + 5) = rPtrC;
	*(allAry + 6) = cyPtrA;
	*(allAry + 7) = cyPtrB;
	*(allAry + 8) = cyPtrC;
	*(allAry + 9) = cPtrA;
	*(allAry + 10) = cPtrB;
	*(allAry + 11) = cPtrC;

	do { 

		printMenu(); 

		cout << "\nEnter the option: "; 

		cin >> option; 

		switch (option) { 

		case 1: // Line 4300 
			getSecondLargestAreaJustinU(allAry, 12, "all", 7);
			break;
		case 2: // Line 4400 
			getSecondSmallestVolumeJustinU(allAry, 12, "all", 2);
			break;
		case 3: // Line 4500 
			displayAreaJustinU(allAry, 12, "Circle", 0);
			break;
		case 4: // Line 4600 
			displayAreaJustinU(allAry, 12, "Rectangle", 0);
			break;
		case 5: // Line 4700 
			displayVolumeJustinU(allAry, 12, "Cylinder", 0);
			break;
		case 6: // Line 4800 
			displayVolumeJustinU(allAry, 12, "Box", 0);
			break;
		case 7: // Line 4900 
			cout << "Code was eaten by Komodo Dragons!!!" << endl;
			//displayOrigin(allAry, 12, "all", 0);
			break;
		case 8: // Line 5000 
			cout << "\n\tThank you! Have fun! ..." << endl;
			break;
		default: // Line 5100 
			cout << "\n\tWrong Option! Please choose a correct option." << endl;
			break;
		}

	} while (option != 8); // Line 5200 

	for (int i = 0; i < 12; i++)
		delete (*(allAry + i));
	delete allAry;

	return; // Line 10000 
} 

void printMenu() { 

	cout << "\n**************************************************************" 
		<< "\n*                            MENU                            *" 
		<< "\n* 1. Get & Display Second Largest Area (All Objects)         *" 
		<< "\n* 2. Get & Display Second Smallest volume (All Objects)      *" 
		<< "\n* 3. Display Areas from Smallest to Largest (All Circles)    *" 
		<< "\n* 4. Display Areas from Smallest to Largest (All Rectangles) *" 
		<< "\n* 5. Display Volumes from Smallest to Largest (All Cylinders)*" 
		<< "\n* 6. Display Volumes from Smallest to Largest (All Boxes)    *" 
		<< "\n* 7. Get and Display Rectangle Closest to Origin             *" 
		<< "\n* 8. Quit                                                    *" 
		<< "\n**************************************************************";

	return; 
}
