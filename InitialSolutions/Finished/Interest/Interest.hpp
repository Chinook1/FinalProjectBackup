#ifndef Interest_HPP
#define Interest_HPP

#include <iostream>
#include <cmath>
using namespace std;

class Interest
{
	private:
		//Only functions inside the class can access private class functions.

	public:
		Interest();
		double simpleInterest(double P, double r, double t);
		double compoundInterest(double P, double r, double n, double t);
		~Interest();

};
# endif
