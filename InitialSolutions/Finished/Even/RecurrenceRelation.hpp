#ifndef RecurrenceRelation_HPP
#define RecurrenceRelation_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
#include "QuadraticEquation.hpp"
#include "SolveX.hpp"
using namespace std;

class RecurrenceRelation
{
	private:
		SolveX* SX;
		int C1;
		int C2;
		int C3;
		double X1;
		double X2;
		//Only functions inside the class can access private class functions.

	public:
		RecurrenceRelation();
		void Steps();
		~RecurrenceRelation();

};
# endif
