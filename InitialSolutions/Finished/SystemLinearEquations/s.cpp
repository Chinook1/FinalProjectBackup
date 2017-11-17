#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include "SolveX.hpp"
using namespace std;


int main (int argc, char **argv) {
	int mine = 944;
	double A1, A2, A3, A4, A5, A6;
	int shouldRun = 1;
	double stuff[6];
	int choice = -1;
	SolveX* CL = new SolveX();

	while(choice != 0)
	{
		cout << "\nIf you wish to leave, press 0" << endl;
		cin >> choice;
		if(choice == 0)
		{
			break;
		}

		cout << "Enter the coefficient to the first x." << endl;
		cin >> stuff[0];
		cout << "Enter the coefficient to the first y." << endl;
		cin >> stuff[1];
		cout << "Enter the first." << endl;
		cin >> stuff[2];
		cout << "Enter the coefficient to the second x." << endl;
		cin >> stuff[3];
		cout << "Enter the coefficient to the second y." << endl;
		cin >> stuff[4];
		cout << "Enter the second." << endl;
		cin >> stuff[5];
		CL->FindXY(stuff[0], stuff[1], stuff[2], stuff[3], stuff[4], stuff[5]);

		cout << "The answer is as follows for the two equations:" << endl;
		cout << CL->getXX1() << "x + " << CL->getYY1() << " = " << CL->getAA1() << endl;
		cout << CL->getXX2() << "x + " << CL->getYY2() << " = " << CL->getAA2() << endl;
		cout << "x = " << CL->getXVal() << endl;
		cout << "y = " << CL->getYVal() << endl;
	}

	fflush(stdout);

  return 0;
}

