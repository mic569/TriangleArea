// Header File  March 15, 2018

#include <iostream>

using namespace std;

const double pi = 3.141592653589793238;

class RtTriangle

{

protected:

	double side1, side2;

	double hypotenuse;

	double angleshortside;

public:

	RtTriangle();

	RtTriangle(double ss1, double ss2);

	void SetSides(double theside1, double theside2);

	double GetSide1();

	double GetSide2();

	double GetAngleRad();

	double GetHypot();

	double CalcArea();

};

class AnyTriangle : public RtTriangle

{

private:

	double side3;

public:

	AnyTriangle();

	AnyTriangle(double s1, double s2, double s3);

	void SetSides(double theside1, double theside2, double theside3);

	double GetSide3();

	double GetSecondAngleRad();

	double GetThirdAngleRad();

	double CalcNonRightArea();

};


