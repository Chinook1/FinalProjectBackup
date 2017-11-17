#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include "SumOfAngles.hpp"
using namespace std;

int main (int argc, char **argv) {
	int mine = 944;
	double A1, A2, A3, A4, A5, A6;
	int shouldRun = 1;
	SumOfAngles* CL = new SumOfAngles();

	CL->getAns(8.0, 62.2);

	while(shouldRun == 1)
	{
		cout << "*********************************" << endl;
		cout << "Please enter the first angle." << endl;
		cin >> A1;
		cout << "Please enter the second angle." << endl;
		cin >> A2;
	
		CL->getAns(A1, A2);
		
		cout << "If you wish to stay, press 1. Press any other number to exit." << endl;
		cin >> shouldRun;
	}
	fflush(stdout);

  return 0;
}
