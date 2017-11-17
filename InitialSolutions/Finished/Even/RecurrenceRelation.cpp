#include "RecurrenceRelation.hpp"

//Can't deal with cubes. You know, X^3.
RecurrenceRelation::RecurrenceRelation()
{
	SX = new SolveX();
	return;
}

void RecurrenceRelation::Steps()
{
	string myVariable = "";
	string myVariable2 = "";
	double Val1, Val2, Val3, Val4;
	cout << "Welcome to RecurrenceRelation's function Steps." << endl;
	cout << "Note: Can't deal with cubes." << endl;
	cout << "You are here because you wish to get the answer to a Linear RecurrenceRelation Relation." << endl;

	cout << "The equation which you are viewing should be somewhat of the following format." << endl;
	cout << "Note: the parenthesis I am using are to indicate subscript." << endl;
	cout << "F(n) = 5F(n-1) + F(n-2)." << endl;
	cout << "If a term has no visible coefficients, that means its coefficent is 1." << endl;
	cout << "Please enter the variable your equation is using." << endl;
	cin >> myVariable;
	cout << "Please enter the function letter. In F(n), F is the function letter." << endl;
	cin >> myVariable2;
	cout << "Please enter the coefficient to the " << myVariable2 << "(" << myVariable << ") term." << endl;
	cin >> C3;
	C3 *= 1;
	cout << "Please enter the coefficent to the F(n-1) term." << endl;
	cin >> C2;
	C2 *= -1;
	cout << "Please enter the coefficent to the F(n-2) term." << endl;
	cin >> C1;
	C1 *= -1;
	

	cout << "The characteristic equation fo the RecurrenceRelation relation is:" << endl;
	cout << C3 << "X^2 + " << C2 << "X + " << C1 << endl;
	QuadraticEquation* E1 = new QuadraticEquation();
	E1->XVal(C3, C2, C1);
	X1 = E1->getholder1();
	X2 = E1->getholder2();
	cout << "x1 = " << X1 << ", x2 = " << X2 << endl;
	cout << "F(n) = a(" << X1 << ")^n + b(" << X2 << ")^n" << endl;
	cout << "At this point, you will have been given two solutions." << endl;
	cout << "I.e., the problem will have something like this: F(0) = 45, F(3) = 9." << endl;
	cout << "Enter the number representative of n, of the first solution.\n "
				<< "In the above example, it would be 0." << endl;
	cin >> Val1;
	cout << "Enter the number is equals. In the above example, it would be 45." << endl;
	cin >> Val2;
	cout << Val2 << " = " << pow(X1, Val1) << "a + " << pow(X2, Val1) << "b" << endl;
	
	cout << "Enter the number representative of n, of the second solution.\n "
				<< "In the above example, it would be 3." << endl;
	cin >> Val3;
	cout << "Enter the number is equals. In the above example, it would be 9." << endl;
	cin >> Val4;
	//cout << Val4 << " = " << pow(X1, Val3) << "a + " << pow(X2, Val3) << "b" << endl;

	//cout << "*****************************************************" << endl;
	//cout << Val2 << " = " << pow(X1, Val1) << "a + " << pow(X2, Val1) << "x*b" << endl;
	//cout << Val4 << " = " << pow(X1, Val3) << "a + " << pow(X2, Val3) << "x*b" << endl;

	//cout << "Val1, Val3 = " << Val1 << ", "<< Val2 << endl;

	//If both X1 and X2 are the same, then its a(?)^n + a*n(?)^n
	if(X1 == X2)
	{
		SX->FindXY(pow(X1, Val1), (pow(X2, Val1))*Val1, Val2, pow(X1, Val3), (pow(X2, Val3))*Val3, Val4);
	}

	else
	{
		SX->FindXY(pow(X1, Val1), pow(X2, Val1), Val2, pow(X1, Val3), pow(X2, Val3), Val4);
	}

	cout << "a = " << SX->getXVal() << "; b = " << SX->getYVal() << endl;

	if(X1 == X2)
	{
		cout << myVariable2 << "(" << myVariable << ") = " << "("<< SX->getXVal() << ") * (" << X1 << ")^" << myVariable << " + (" << SX->getYVal() 
				<< ") * " << myVariable << " * (" << X2 << ")^" << myVariable << endl;
	}

	else
	{
		cout << myVariable2 << "(" << myVariable << ") = " << "("<< SX->getXVal() << ") * (" << X1 << ")^" << myVariable << " + (" << SX->getYVal() 
				<< ") * (" << X2 << ")^" << myVariable << endl;
	}

//Call the program, sending it pow(X1, Val1), pow(X2, Val1), Val2, pow(X1, Val3), pw(X2, Val3), Val4

}


RecurrenceRelation::~RecurrenceRelation()
{

}
