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
#include "SinesLaw.hpp"

using namespace std;




int main (int argc, char **argv) {
	int mine = 944;
	double A1, A2, A3, A4, A5, A6;
	int shouldRun = 1;
	SinesLaw* CL = new SinesLaw();

	//CL->getAns();
	
	cout << 8/(sin((62.2*3.14159)/180))<< endl;
	
	CL->getAns(8.0, 0.0, 62.2, 33.5);

while(shouldRun == 1)
{
	cout << "*********************************" << endl;
	cout << "Please enter the first side." << endl;
	cin >> A1;
	cout << "Please enter the second side." << endl;
	cin >> A2;
	cout << "Please enter the first angle." << endl;
	cin >> A3;
	cout << "Please enter the second angle." << endl;
	cin >> A4;

	CL->getAns(A1, A2, A3, A4);
	
	cout << "If you wish to stay, press 1. Press any other number to exit." << endl;
	cin >> shouldRun;
}
	fflush(stdout);

  return 0;
}
