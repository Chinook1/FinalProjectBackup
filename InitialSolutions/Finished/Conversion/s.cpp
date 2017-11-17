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
#include "Conversion.hpp"

using namespace std;




int main (int argc, char **argv) {
	int mine = 944;
	double A1, A2, A3, A4, A5, A6;
	int shouldRun = 1;
	Conversion* CL = new Conversion();

	//CL->getAns();

	//This returns a correct value. 
	CL->getDegree(4.712385);

	CL->getRadian(270);



	fflush(stdout);

  return 0;
}
