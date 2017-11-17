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
#include "DirectionFields1.hpp"

using namespace std;




int main (int argc, char **argv) {
	int mine = 944;
	double A1, A2, A3, A4, A5, A6;
	int shouldRun = 1;
	DirectionFields1* CL = new DirectionFields1();

	//CL->getAns();

	//This returns a correct value. This is for DirectionFields.cpp
	//CL->getDegree();

	//This is for DirectionFields1.cpp
	CL->run();

	fflush(stdout);

  return 0;
}
