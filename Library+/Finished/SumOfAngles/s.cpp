#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include "InterfaceSumOfAngles.hpp"
using namespace std;

int main (int argc, char **argv) {
	InterfaceSumOfAngles* ISOA = new InterfaceSumOfAngles();
	ISOA->InterfaceFunction();

	fflush(stdout);

  return 0;
}
