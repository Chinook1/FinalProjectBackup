#ifndef Root_HPP
#define Root_HPP

#include <iostream>
#include <vector> //So I can use a vector
using namespace std;

class Root
{
	private:
		float floatTest;
		int intTest;
		vector<int> primeNumbers;
		vector<int> V1;
		int Radicand;
		int Coefficient;
		//Only functions inside the class can access private class functions.

	public:
		Root();
		void InitializePrimeNumbers();
		vector<int> getPrime(int intVal);
		void CalcRoot(int root, int number);
		int getRadicand();
		int getCoefficient();
		~Root();

};
# endif
