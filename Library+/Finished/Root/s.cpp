#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <vector> //Needed to have vectors.
#include "InterfaceRoot.hpp"

using namespace std;

int main (int argc, char **argv) {

	InterfaceRoot* IR = new InterfaceRoot();
	IR->InterfaceFunction();

	fflush(stdout);
  return 0;
}
