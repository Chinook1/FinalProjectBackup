#ifndef TrigArea_HPP
#define TrigArea_HPP

#include <iostream>
#include <cmath> //So I can use sqrt
using namespace std;

class TrigArea
{
	private:
		//Only functions inside the class can access private class functions.

	public:
		TrigArea();
		double HeronFormula(double a, double b, double c);
		double SideAngleSideFormula(double side1, double side2, double angle1, int radian);
		~TrigArea();

};
# endif
