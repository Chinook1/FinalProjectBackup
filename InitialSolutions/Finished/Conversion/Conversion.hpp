#ifndef Conversion_HPP
#define Conversion_HPP

#include <iostream>
#include <cmath> //So I can use cos
using namespace std;

class Conversion
{
	private:
		//Only functions inside the class can access private class functions.

	public:
		Conversion();
		double getDegree(double A);
		double getRadian(double A);
		~Conversion();

};
# endif
