#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <math.h> //Needed to use sqrt
#include <vector>
//#include "Chemistry.hpp"
//#include "ChemistryConversion.hpp"
//#include "LibraryGasLaws.hpp"
#include "InterfaceChemistryConversion.hpp"
#include "InterfaceGasLaws.hpp"
#include "InterfaceChemistry.hpp"
using namespace std;

int main (int argc, char **argv) {
	InterfaceChemistryConversion* ICC = new InterfaceChemistryConversion();
	ICC->InterfaceFunction();

	InterfaceGasLaws* IGL = new InterfaceGasLaws();
	IGL->InterfaceFunction();
	
	/*LibraryChemistry* C = new LibraryChemistry();
	cout << "Density: " << C->density(96.5, 5.0) << endl; //answer should be 19.3
	cout << "Neutron: " << C->neutron(79) << endl; //Answer should be 118
	cout << "Proton: " << C->proton(79) << endl; //Answer should be 79
	cout << "Electron: " << C->electron(79) << endl; //Answer should be 79
	cout << "Molarity: " << C->Molarity(.210, .750) << endl; //Answer should be .280
	cout << "Molality: " << C->Molality(.75, 2.50) << endl; //Answer should be  .300*/
	
	InterfaceChemistry* IC = new InterfaceChemistry();
	IC->InterfaceFunction();

	fflush(stdout);

  return 0;
}
