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
#include "InterfaceDirectionFields.hpp"

using namespace std;




int main (int argc, char **argv) {
	
	InterfaceDirectionFields* IDF = new InterfaceDirectionFields();


	//This is for DirectionFields1.cpp
	IDF->InterfaceFunction();

	fflush(stdout);

  return 0;
}
