//At present, I have added a condition in the while loop, so that it will only run 
//for a certain amount of time. It can be replaced with while(1) if neccessary. 

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
#include "Interest.hpp"

using namespace std;




int main (int argc, char **argv) {
	double P1, P2, P3, P4;
	int rateFlag;
	Interest* I = new Interest();
	//CL->getDegree(4.712385);
	cout << "Please enter the rate." << endl;
	cin >> P2;
	cout << "If the rate is per year, enter the time in terms of years. If it's in months, enter the time in months." << endl;
	cin >> P3;
	cout << "Please enter the deposit or loan amount." << endl;
	cin >> P1;
	cout << I->simpleInterest(P1, P2, P3) << endl;

	cout << "Please enter the deposit or loan amount." << endl;
	cin >> P1;
	cout << "Please enter the annual interest rate." << endl;
	cin >> P2;
	cout << "Please enter the number of times the interest is compounded per year." << endl;
	cin >> P3;
	cout << "Please enter the number of years the money is invested or borrowed for." << endl;
	cin >> P4;

	cout << I->compoundInterest(P1, P2, P3, P4) << endl;

	fflush(stdout);

  return 0;
}
