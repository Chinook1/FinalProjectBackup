#include "LibrarySinesLaw.hpp"

LibrarySinesLaw::LibrarySinesLaw()
{
	return;
}


double LibrarySinesLaw::getAns(double a, double b, double A, double B)
{
	double answer;
	double temp1 = 0;
	double temp2 = 0;
	double temp3 = 0;
	if(a != 0 && A != 0)
	{
		if(b != 0)
		{	
			temp1 = b*sin(A*3.14159/180);
			temp1 = temp1/a;
			temp1 = asin(temp1);
			answer = temp1*180/3.14159;
			//cout << "Answer (B)= " << answer << endl;
		}

		else
		{	
			answer = a*(sin(B*3.14159/180))/sin(A*3.14159/180);
			//cout << "Answer (b)= " << answer << endl;
		}
	}

	else
	{
		if(a != 0)
		{			
			temp1 = a*sin(B*3.14159/180);
			temp1 = temp1/b;
			temp1 = asin(temp1);
			answer = temp1*180/3.14159;
			//cout << "Answer (A)= " << answer << endl;
		}

		else
		{
			answer = b*(sin(A*3.14159/180))/sin(B*3.14159/180);
			//cout << "Answer (a)= " << answer << endl;
		}
	}

	return answer;
}


LibrarySinesLaw::~LibrarySinesLaw()
{

}
