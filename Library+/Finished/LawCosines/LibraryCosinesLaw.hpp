#ifndef LibraryCosinesLaw_HPP
#define LibraryCosinesLaw_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
using namespace std;

class LibraryCosinesLaw
{
	private:
		float floatTest;
		int intTest;
		vector<int> V1;
		//Only functions inside the class can access private class functions.

	public:
		LibraryCosinesLaw();
		double getAns(double a, double b, double c, double A, double B, double C);
		~LibraryCosinesLaw();

};
# endif
