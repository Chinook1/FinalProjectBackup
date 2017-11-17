#include "QuadraticEquation.hpp"

QuadraticEquation::QuadraticEquation()
{
	return;
}

void QuadraticEquation::XVal(int a, int b, int c)
{
	double hold1, hold2, hold3;
	hold1 = pow(b, 2.0);
	hold1 = hold1 - (4*a*c);
	if(hold1 >= 0)
	{
		hold2 = (-1*b) + sqrt(hold1/1.0);
		hold3 = (-1*b) - sqrt(hold1/1.0);
		hold2 = hold2/(2.0*a);
		hold3 = hold3/(2.0*a);
		holder1 = hold2;
		holder2 = hold3;
		//cout << "x = " << hold2 << endl;
		//cout << "x = " << hold3 << endl;
	}
}

double QuadraticEquation::getholder1()
{
	return holder1;
}

double QuadraticEquation::getholder2()
{
	return holder2;
}

QuadraticEquation::~QuadraticEquation()
{

}
