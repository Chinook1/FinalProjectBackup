#include "Interest.hpp"

Interest::Interest()
{
	return;
}


double Interest::simpleInterest(double P, double r, double t)
{
	double holder;
	holder = 1 + (r/100.0)*t;
	holder *= P;
	return holder;
}


double Interest::compoundInterest(double P, double r, double n, double t)
{
	double holder;
	double power;
	holder = (r/100.0)/(n/1.0);
	holder += 1;
	power = n*(t);
	holder = pow(holder, power);
	holder *= P;
	return holder;
}


Interest::~Interest()
{

}
