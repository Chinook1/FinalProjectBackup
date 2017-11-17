#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <math.h> //Needed to use sqrt
#include "QuadraticEquation.hpp"
#include "InterfaceRecurrenceRelation.hpp"

using namespace std;

int main (int argc, char **argv) {
	QuadraticEquation* QE = new QuadraticEquation();

	QE->XVal(1, -5, 6);
	cout << "x = " << QE->getholder1() << endl;
	cout << "x = " << QE->getholder2() << endl;

	InterfaceRecurrenceRelation* RR = new InterfaceRecurrenceRelation();

	RR->InterfaceFunction();

	fflush(stdout);

  return 0;
}
