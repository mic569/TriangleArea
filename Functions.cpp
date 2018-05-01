//Functions  March 15, 2018

#include "stdafx.h"

#include <iostream>

#include "Header.h"

/*Right Triangle*/

RtTriangle::RtTriangle()

{

	side1 = 1;

	side2 = 1;

}

RtTriangle::RtTriangle(double ss1, double ss2)

{
	side1 = ss1;
	side2 = ss2;
	hypotenuse = sqrt(pow(ss1, 2) + pow(ss2, 2));

	angleshortside = acos(ss1 / hypotenuse);

}

void RtTriangle::SetSides(double theside1, double theside2)

{

	side1 = theside1;

	side2 = theside2;

}

double RtTriangle::GetSide1()

{
	return side1;
}

double RtTriangle::GetSide2()

{
	return side2;
}

double RtTriangle::GetAngleRad()

{
	return angleshortside;
}

double RtTriangle::GetHypot()

{
	return hypotenuse;
}

double RtTriangle::CalcArea()

{
	return ((side1*side2) / 2.0);
}

/*Any Triangle*/

AnyTriangle::AnyTriangle()

{

	side1 = 1;

	side2 = 1;

	side3 = 1;

}

AnyTriangle::AnyTriangle(double s1, double s2, double s3)

{

	side1 = s1;

	side2 = s2;

	side3 = s3;

	angleshortside = acos(((pow(s2, 2) + pow(s3, 2)) - pow(s1, 2)) / (2 * s2*s3));

}

double AnyTriangle::GetSide3()

{
	return side3;
}

double AnyTriangle::GetSecondAngleRad()

{

	return acos(((pow(side1, 2) + pow(side3, 2)) - pow(side2, 2)) / (2 * side1*side3));

}

double AnyTriangle::GetThirdAngleRad()

{

	return acos(((pow(side1, 2) + pow(side2, 2)) - pow(side3, 2)) / (2 * side1*side2));

}

double AnyTriangle::CalcNonRightArea()

{

	double s = (side1 + side2 + side3) / 2.0;

	return sqrt(s*(s - side1)*(s - side2)*(s - side3));

}

