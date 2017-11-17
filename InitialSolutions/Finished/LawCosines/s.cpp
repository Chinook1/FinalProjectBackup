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
#include "CosinesLaw.hpp"

using namespace std;




int main (int argc, char **argv) {
	int mine = 944;
	double A1, A2, A3, A4, A5, A6;
	int shouldRun = 1;
	CosinesLaw* CL = new CosinesLaw();

	CL->getAns(0.0, 11.0, 8.0, 37.0, 0.0, 0.0);

	CL->getAns(8.0, 6.0, 7.0, 0.0, 0.0, 0.0);

	cout << "***************************" << endl;
	cout << "Note: in the case where you know the length of all the sides, and you" << endl;
	cout << "want an angle, and don't know the values of any of the angles, so as follows:" << endl;
	cout << "Enter zero for the angle you want. Enter some random non-zero value for the other two values." << endl;


while(shouldRun == 1)
{
	cout << "***************************" << endl;
	cout << "Please enter the value for a." << endl;
	cin >> A1;
	cout << "Please enter the value for b." << endl;
	cin >> A2;
	cout << "Please enter the value for c." << endl;
	cin >> A3;
	cout << "Please enter the value for A." << endl;
	cin >> A4;
	cout << "Please enter the value for B." << endl;
	cin >> A5;	
	cout << "Please enter the value for C." << endl;
	cin >> A6;

	CL->getAns(A1, A2, A3, A4, A5, A6);

	
	cout << "If you wish to stay, press 1. Press any other number to exit." << endl;
	cin >> shouldRun;
}
	fflush(stdout);

  return 0;
}
