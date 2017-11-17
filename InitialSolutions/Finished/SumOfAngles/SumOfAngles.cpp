#include "SumOfAngles.hpp"

SumOfAngles::SumOfAngles()
{
	return;
}


double SumOfAngles::getAns(double A, double B)
{
	cout << "Third angle = " << 180 - (A+B) << endl;
	return 180-(A+B);
}


SumOfAngles::~SumOfAngles()
{

}
