#ifndef LibraryTrigArea_HPP
#define LibraryTrigArea_HPP

#include <iostream>
#include <cmath> //So I can use sqrt
using namespace std;

class LibraryTrigArea
{
	private:
		//Only functions inside the class can access private class functions.

	public:
		LibraryTrigArea();
		double HeronFormula(double a, double b, double c);
		double SideAngleSideFormula(double side1, double side2, double angle1, int radian);
		~LibraryTrigArea();

};
# endif
