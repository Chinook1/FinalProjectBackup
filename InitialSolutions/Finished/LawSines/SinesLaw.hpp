#ifndef SinesLaw_HPP
#define SinesLaw_HPP

#include <iostream>
#include <cmath> //So I can use cos
using namespace std;

class SinesLaw
{
	private:
		//Only functions inside the class can access private class functions.

	public:
		SinesLaw();
		double getAns(double a, double b, double A, double B);
		~SinesLaw();

};
# endif
