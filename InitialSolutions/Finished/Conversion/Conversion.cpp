#include "Conversion.hpp"

Conversion::Conversion()
{
	return;
}


double Conversion::getDegree(double A)
{
	cout << "Degree value = " << A*(180/3.14159) << endl;
	return A*(180/3.14159);
}

double Conversion::getRadian(double A)
{
	cout << "Radian value = " << A*(3.14159/180) << endl;
	return A*(3.14159/180);
}

Conversion::~Conversion()
{

}
