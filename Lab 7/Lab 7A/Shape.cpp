#include <iostream>
#include <string>
#define SHAPE
#include <math.h>
using namespace std;

class Circle
{
	int X;
	int Y;
	int Radius;
	float Pi = 3.14f;

public:

	Circle(int x, int y, int radius)
	{
		this-> X = x;
		this->Y = y;
		this->Radius = radius;

	}
	//accessors methods
	int GetX()
	{
		return X;
	}
	int GetY()
	{
		return Y;
	}
	int GetRadius()
	{
		return Radius;

	}
	int GetDiameter()
	{
		int Diameter = Radius * 2;
		return Diameter;
	}
	double GetArea()
	{
		float Area = Pi * Radius * Radius;
		return Area;
	}
	double GetCircumference()
	{
		float Circumference = Pi * Radius * 2;
		return  Circumference;

	}

};