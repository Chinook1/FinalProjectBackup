#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <math.h> //Needed to use sqrt
#include "TrigArea.hpp"

using namespace std;

int main (int argc, char **argv) {
	TrigArea* TA = new TrigArea();

	double side1, side2, side3, myAnswer;
	int determineBool;

	int choice = -1;
	while(choice != 0)
	{
		cout << "\nIf you wish to exit, press 0." << endl;
		cout << "If you want the area of a triangle while knowing the length of the sides, press 1." << endl;
		cout << "If you want the area of a triangle, and know the length of two sides, and the value of the angle in-between them, press 2." << endl;
		cin >> choice;

		if(choice ==0)
		{
			cout << "Goodbye." << endl;
			break;
		}

		else if(choice == 1)
		{
			cout << "Please enter the first side." << endl;
			cin >> side1;
			cout << "Please enter the second side." << endl;
			cin >> side2;
			cout << "Please enter the third side." << endl;
			cin >> side3;
			myAnswer = TA->HeronFormula(side1, side2, side3);
			cout << "The area of the triangle is " << myAnswer << endl;
		}

		else if(choice == 2)
		{
			cout << "Please enter the first side." << endl;
			cin >> side1;
			cout << "Please enter the second side." << endl;
			cin >> side2;
			cout << "Please enter the angle." << endl;
			cin >> side3;
			cout << "If you entered the angle value in radians, enter 1." << endl;
			cout << "If you entered the angle value in degrees, enter 0." << endl;
			cin >> determineBool;
			myAnswer = TA->SideAngleSideFormula(side1, side2, side3, determineBool);
			cout << "The area of the triangle is " << myAnswer << endl;
		}

		else
		{
			cout << "Sorry. You entered an invalid number." << endl;
		}

	}

	//cout << TA->HeronFormula(3, 4, 3) << endl;

	

	fflush(stdout);

  return 0;
}
