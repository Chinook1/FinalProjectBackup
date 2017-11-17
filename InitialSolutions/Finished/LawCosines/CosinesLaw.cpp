#include "CosinesLaw.hpp"

CosinesLaw::CosinesLaw()
{
	floatTest = 0.0;
	intTest = 0;
	cout << "You entered the parent constructor, CosinesLaw." << endl;
	return;
}


double CosinesLaw::getAns(double a, double b, double c, double A, double B, double C)
{
	double answer;
	double temp1 = 0;
	double temp2 = 0;
	double temp3 = 0;
	double convert = 0; //cos wants radians, not degrees.
	if(a == 0 && b != 0 && c != 0 && A != 0)
	{
		temp1 = pow(b, 2.0); //b^2;
		cout << "b^2 = " << temp1 << endl;
		temp2 = pow(c, 2.0); // c^2;
		cout << "c^2 = " << temp2 << endl;
		temp1 += temp2;
		temp2 = -2*b*c;
		cout << "First part: " << temp2 << endl;
		convert = (A * 3.14159)/180;
		temp3 = cos(convert);
		cout << "Second part: " << temp3 << endl;
		temp2 *= temp3;
		temp1 += temp2;
		temp1 = sqrt(temp1);
		cout << "Answer is " << temp1 << endl;
		answer = temp1;
	}

	else if(b == 0 && a != 0 && c != 0 && B != 0)
	{
		temp1 = pow(a, 2.0); //b^2;
		cout << "a^2 = " << temp1 << endl;
		temp2 = pow(c, 2.0); // c^2;
		cout << "c^2 = " << temp2 << endl;
		temp1 += temp2;
		temp2 = -2*a*c;
		cout << "First part: " << temp2 << endl;
		convert = (B * 3.14159)/180;
		temp3 = cos(convert);
		cout << "Second part: " << temp3 << endl;
		temp2 *= temp3;
		temp1 += temp2;
		temp1 = sqrt(temp1);
		cout << "Answer is " << temp1 << endl;
		answer = temp1;
	}

	else if (c == 0 && a != 0 && b != 0 && C != 0)
	{
		temp1 = pow(a, 2.0); //b^2;
		cout << "a^2 = " << temp1 << endl;
		temp2 = pow(b, 2.0); // c^2;
		cout << "b^2 = " << temp2 << endl;
		temp1 += temp2;
		temp2 = -2*a*b;
		cout << "First part: " << temp2 << endl;
		convert = (C * 3.14159)/180;
		temp3 = cos(convert);
		cout << "Second part: " << temp3 << endl;
		temp2 *= temp3;
		temp1 += temp2;
		temp1 = sqrt(temp1);
		cout << "Answer is " << temp1 << endl;
		answer = temp1;
	}

	//Fix this part. Maybe, warn the user to enter 1 for angles they don't want, when have all of the sides?
	//Right now, for this case, I enter 1 for the angles I don't want to know.
	else if(a != 0 && b != 0 && c != 0 && A == 0)
	{
		temp1 = pow(b, 2.0) + pow(c, 2.0) - pow(a, 2.0);
		temp1 = temp1/(2*b*c);
		temp1 = acos(temp1)*(180/3.14159);
		cout << "A = " << temp1 << endl;
		answer = temp1;
	}

	else if(a != 0 && b != 0 && c != 0 && B == 0)
	{
		temp1 = pow(c, 2.0) + pow(a, 2.0) - pow(b, 2.0);
		temp1 = temp1/(2*c*a);
		temp1 = acos(temp1)*(180/3.14159);
		cout << "B = " << temp1 << endl;
		answer = temp1;
	}

	else if(a != 0 && b != 0 && c != 0 && C == 0)
	{
		temp1 = pow(a, 2.0) + pow(b, 2.0) - pow(c, 2.0);
		temp1 = temp1/(2*a*b);
		temp1 = acos(temp1)*(180/3.14159);
		cout << "C = " << temp1 << endl;
		answer = temp1;
	}

	else
	{
		cout << "Error!" << endl;
		answer = -1;
	}

	return answer;
}


CosinesLaw::~CosinesLaw()
{

}
