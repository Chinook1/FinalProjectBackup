#include "LibraryTrigArea.hpp"

LibraryTrigArea::LibraryTrigArea()
{
	return;
}

double LibraryTrigArea::HeronFormula(double a, double b, double c)
{
	double current;
	double s, block1, block2, block3, answer;
	
	if(a <= 0 || b <= 0 || c <= 0)
	{
		//cout << "An error has occurred! No side is allowed to be negative or zero." << endl;
		return -1.0;
	}

	s = .5*(a+b+c);
	block1 = s - a;
	block2 = s - b;
	block3 = s - c;
	
	//current will now be the number inside of the square root.
	current = s * block1 * block2 * block3;
	answer = sqrt(current);
	
	return answer;
}

double LibraryTrigArea::SideAngleSideFormula(double side1, double side2, double angle1, int radian)
{
	double answer, current;
	
	current = .5 * side1 * side2;

	//If the value in angle1 is in radians
	if(radian == 1)
	{
		current = current * sin(angle1);
	}

	//Answer was given in degrees
	else
	{
		current = current * sin(angle1*3.14159/180.0);
	}

	answer = current; 
	return answer;
}

LibraryTrigArea::~LibraryTrigArea()
{

}
