//At present, I have added a condition in the while loop, so that it will only run 
//for a certain amount of time. It can be replaced with while(1) if neccessary. 

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "InterfaceInterest.hpp"

using namespace std;




int main (int argc, char **argv) {
	InterfaceInterest* II = new InterfaceInterest();
	II->InterfaceFunction();

	fflush(stdout);

  return 0;
}
