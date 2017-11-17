#ifndef QuadraticEquation_HPP
#define QuadraticEquation_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
using namespace std;

class QuadraticEquation
{
	private:
		double holder1;
		double holder2;
		//Only functions inside the class can access private class functions.

	public:
		QuadraticEquation();
		void XVal(int a, int b, int c);
		double getholder1();
		double getholder2();
		~QuadraticEquation();

};
# endif
