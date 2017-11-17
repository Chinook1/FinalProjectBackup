#ifndef CosinesLaw_HPP
#define CosinesLaw_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
using namespace std;

class CosinesLaw
{
	private:
		float floatTest;
		int intTest;
		int primeNumbers[46];
		vector<int> V1;
		//Only functions inside the class can access private class functions.

	public:
		CosinesLaw();
		double getAns(double a, double b, double c, double A, double B, double C);
		~CosinesLaw();

};
# endif
