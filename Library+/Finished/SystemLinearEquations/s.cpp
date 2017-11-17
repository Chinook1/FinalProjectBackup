#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include "InterfaceSystemLinearEquations.hpp"
using namespace std;


int main (int argc, char **argv) {
	InterfaceSystemLinearEquations* ISLE = new InterfaceSystemLinearEquations();
	ISLE->InterfaceFunction();
	/*int shouldRun = 1;
	double stuff[6];
	int choice = -1;
	SystemLinearEquations* SLE = new SystemLinearEquations();

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
		SLE->FindXY(stuff[0], stuff[1], stuff[2], stuff[3], stuff[4], stuff[5]);

		cout << "The answer is as follows for the two equations:" << endl;
		cout << SLE->getXX1() << "x + " << SLE->getYY1() << " = " << SLE->getAA1() << endl;
		cout << SLE->getXX2() << "x + " << SLE->getYY2() << " = " << SLE->getAA2() << endl;
		cout << "x = " << SLE->getXVal() << endl;
		cout << "y = " << SLE->getYVal() << endl;
	}*/

	fflush(stdout);

  return 0;
}

