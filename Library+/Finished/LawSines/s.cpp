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
#include "InterfaceSinesLaw.hpp"

using namespace std;




int main (int argc, char **argv) {
	cout << "This is a test of using the Interface and library versions." << endl;
	InterfaceSinesLaw* ISL = new InterfaceSinesLaw();
	ISL->getInterfaceAns();	

	fflush(stdout);

  return 0;
}
