#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <math.h> //Needed to use sqrt
#include "InterfaceTrigArea.hpp"

using namespace std;

int main (int argc, char **argv) {

	InterfaceTrigArea* ITA = new InterfaceTrigArea();
	ITA->InterfaceFunction();

	

	fflush(stdout);

  return 0;
}
