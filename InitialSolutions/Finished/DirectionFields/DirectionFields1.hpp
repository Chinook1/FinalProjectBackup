#ifndef DirectionFields1_HPP
#define DirectionFields1_HPP

#include <iostream>
#include <vector> //So I can use a vector
#include <cmath> //So I can use cos
using namespace std;

class DirectionFields1
{
	private:
		float floatTest;
		int intTest;
		int primeNumbers[46];
		vector<int> V1;
		//Only functions inside the class can access private class functions.

	public:
		DirectionFields1();
		void getDegree();
		void run();
		vector<int> keyStroke();
		~DirectionFields1();

};
# endif
