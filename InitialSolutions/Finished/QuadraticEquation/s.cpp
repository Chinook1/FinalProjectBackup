#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <math.h> //Needed to use sqrt
#include "InterfaceQuadraticEquation.hpp"

using namespace std;

int main (int argc, char **argv) {
	InterfaceQuadraticEquation* IQE = new InterfaceQuadraticEquation();

	IQE->InterfaceFunction();


	fflush(stdout);

  return 0;
}
