#include <cstdio>
#include <cstdlib>
#include <string>
#include <signal.h>
#include <thread> // Needed, so the thread can sleep.
#include <chrono> // Needed so that the thread can sleep.
#include <time.h>
#include <iostream>
#include <vector> //Needed to have vectors.
#include <math.h> //Needed to use sqrt
#include "InterfaceConversion.hpp"
#include "InterfaceDirectionFields.hpp"
#include "InterfaceCosinesLaw.hpp"
#include "InterfaceSinesLaw.hpp"
#include "InterfaceRoot.hpp"
#include "InterfaceSumOfAngles.hpp"
#include "InterfaceTrigArea.hpp"
#include "InterfaceSystemLinearEquations.hpp"
#include "InterfaceQuadraticEquation.hpp"
#include "InterfaceRecurrenceRelation.hpp"
#include "InterfaceInterest.hpp"
#include "InterfaceChemistryConversion.hpp"
#include "InterfaceGasLaws.hpp"
#include "InterfaceChemistry.hpp"
using namespace std;

int main (int argc, char **argv) {
	InterfaceConversion* IC = new InterfaceConversion();
	InterfaceDirectionFields* IDF = new InterfaceDirectionFields();
	InterfaceCosinesLaw* ICL = new InterfaceCosinesLaw();
	InterfaceSinesLaw* ISL = new InterfaceSinesLaw();
	InterfaceRoot* IR = new InterfaceRoot();
	InterfaceSumOfAngles* ISOA = new InterfaceSumOfAngles();
	InterfaceTrigArea* ITA = new InterfaceTrigArea();
	InterfaceSystemLinearEquations* ISLE = new InterfaceSystemLinearEquations();
	InterfaceQuadraticEquation* IQE = new InterfaceQuadraticEquation();
	InterfaceRecurrenceRelation* IRR = new InterfaceRecurrenceRelation();
	InterfaceInterest* II = new InterfaceInterest();
	InterfaceChemistryConversion* ICC = new InterfaceChemistryConversion();
	InterfaceGasLaws* IGL = new InterfaceGasLaws();
	InterfaceChemistry* InCh = new InterfaceChemistry();

	int myChoice = -1;
	while(myChoice != 0)
	{
		cout << "\nIf you wish to leave, press 0." << endl;
		cout << "If you wish to do a conversion problem between Radians and Degrees, press 1." << endl;
		cout << "If you wish to do a direction fields problem, press 2." << endl;
		cout << "If you wish to do a problem using the Law of Cosines, press 3." << endl;
		cout << "If you wish to do a problem using the Law of Sines, press 4." << endl;
		cout << "If you wish to get the root of a number, or the prime constituants, press 5." << endl;
		cout << "If you know the values of two angles, and want the third, press 6." << endl;
		cout << "If you want the area of a triangle, and either know the values of the three sides, or two sides and the angle in-between, press 7." << endl;
		cout << "If you want to get the x and y values from Systems of Linear Equations, press 8." << endl;
		cout << "If you want to get the x values from a polynomial with the Quadratix Equation, press 9." << endl;
		cout << "If you want to solve Discrete Recurrence Relations, press 10." << endl;
		cout << "If you want to solve interest problems (simple and compound), press 11." << endl;
		cout << "If you want to convert chemistry related units, press 12." << endl;
		cout << "If you want to solve gas law problems, press 13." << endl;
		cout << "If you want to solve various chemistry problems, press 14." << endl;
		cout << "" << endl;

		cin >> myChoice;
		if(myChoice == 0)
		{
			cout << "Goodbye!" << endl;
			break;
		}

		else if(myChoice == 1)
		{
			IC->InterfaceFunction();
		}

		else if(myChoice == 2)
		{
			IDF->InterfaceFunction();
		}

		else if(myChoice == 3)
		{
			ICL->InterfaceFunction();
		}

		else if(myChoice == 4)
		{
			ISL->getInterfaceAns();	
		}

		else if(myChoice == 5)
		{
			IR->InterfaceFunction();
		}

		else if(myChoice == 6)
		{
			ISOA->InterfaceFunction();
		}

		else if(myChoice == 7)
		{
			ITA->InterfaceFunction();
		}

		else if(myChoice == 8)
		{
			ISLE->InterfaceFunction();
		}

		else if(myChoice == 9)
		{
			IQE->InterfaceFunction();
		}

		else if(myChoice == 10)
		{
			IRR->InterfaceFunction();
		}

		else if(myChoice == 11)
		{
			II->InterfaceFunction();
		}

		else if(myChoice == 12)
		{
			ICC->InterfaceFunction();
		}

		else if(myChoice == 13)
		{
			IGL->InterfaceFunction();
		}

		else if(myChoice == 14)
		{
			InCh->InterfaceFunction();
		}
		

		else
		{
			cout << "Sorry. You selected an invalid option." << endl;
		}


	}

	fflush(stdout);

  return 0;
}
