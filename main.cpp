
#include<iostream>
#include "Header.h"
using namespace std;

int main()
{

	double S1, S2, S3, A1, A2, A3, hyp, area;
	cout << "Enter side 1 of the right triangle: ";
	cin >> S1;
	cout << "\n Enter side 2 of the right triangle: ";
	cin >> S2;
	RtTriangle RTriangle(S1, S2);
	S1 = RTriangle.GetSide1();
	cout << endl << "Side 1 is: " << S1;
	S2 = RTriangle.GetSide2();
	cout << endl << "Side 2 is: " << S2;
	A1 = RTriangle.GetAngleRad();
	cout << endl << "The angle is: " << A1<<" radians or " <<A1*180.0/pi<<" degrees\n";
	hyp = RTriangle.GetHypot();
	cout << endl << "The hypotenuse is: " << hyp;
	area = RTriangle.CalcArea();
	cout << endl << "The area is: " << area<<endl;
	return 0;
}







