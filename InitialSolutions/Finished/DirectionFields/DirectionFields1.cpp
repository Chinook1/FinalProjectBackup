#include "DirectionFields1.hpp"

DirectionFields1::DirectionFields1()
{
	floatTest = 0.0;
	intTest = 0;
	cout << "You entered the parent constructor, DirectionFields1." << endl;
	return;
}


/*void DirectionFields1::getDegree()
{
	char myVariable = 'y';
	cout << "Please enter the variable being used. (x or y, or z.)" << endl;
	cin >> myVariable;
	vector<float> C;
	vector<float> A;
	//A.push_back(-1);
	//A.push_back(1);
	//A.push_back(2);
	int flagComing = 0;
	float temp1;
	cout << "Please enter the lines (y= 0, for example), in ascending order." << endl;
	while(flagComing != 1)
	{
		cout << "If you are done enter values, press 1." << endl;
		cin >> flagComing;
		if(flagComing != 1)
		{
			cout << "Enter the next number." << endl;
			cin >> temp1;
			A.push_back(temp1);
		}
	}

	vector<float> B;
	//B.push_back(-2);
	//B.push_back(0);
	//B.push_back(1.5);
	//B.push_back(3);
	for(int aa = 0; aa < A.size(); aa++)
	{
		if(aa == 0)
		{
			B.push_back(A[aa]-1);
		}
		else
		{
			B.push_back((A[aa-1]+A[aa])/2.0);
		}

		if(aa == (A.size()-1))
		{
			B.push_back(A[aa]+1);
		}
	}

	for(int jj = 0; jj < B.size(); jj++)
	{
		cout << B[jj] << endl;
	}

	float c;
	int flag = 0;
	float myFinal = 1;
	float number;
	float current = 1;
	int checker = -1;

	for(int i = 0; i < B.size(); i++)
	{
			cout << "\n*************** Round #" << i << " *********************" << endl;
			while(flag != 1)
			{
				cout << "myFinal = " << myFinal << endl;
				cout << "Here are the options.\n1. If the variable is added to a number, press 1.\n"
							<<"2. If the variable is subtracted by a number, press 2.\n"
						<< "3. If a number is subtracted by the variable, press 3.\n"
						<< "4. If you are finished with the inside of the chunk, but it's raised to a power, press 4.\n" 
						<< "5. If the variable is multiplied by a number, press 5.\n" 
						<< "6. If you are finished with the chunk, press 6.\n" 
						<< "7. When you are done with the equation, press 7."<< endl;
				cin >> checker;
				if(checker == 1)
				{
					cout << "Please enter the number." << endl;
					cin >> number;
					current = B[i] + number;
				}
				else if(checker == 2)
				{
					cout << "Please enter the number." << endl;
					cin >> number;
					current = B[i] - number;
				}
				else if(checker == 3)
				{
					cout << "Please enter the number." << endl;
					cin >> number;
					current = number - B[i];
				}
				else if(checker == 4)
				{
					cout << "Please enter the number." << endl;
					cin >> number;
					current = pow(current, number);
				}
				else if(checker == 5)
				{
					cout << "Please enter the number." << endl;
					cin >> number;
					current = number*B[i];
				}
				else if(checker == 6)
				{
					myFinal *= current;
				}

				else
				{
					flag = 1;
				}
				
				
			}
		
		cout << "******************\n" << myFinal << "\n***********************" << endl;
		C.push_back(myFinal);
		flag = 0;
		myFinal = 1;
		current = 1;
	}
	cout << "Values are = ";

	for(int bb = 0; bb < C.size(); bb++)
	{
		cout << C[bb] << ", ";
	}
	cout << "\n\n*************************************\n**************************************" << endl;

	for(int cc = 0; cc < A.size(); cc++)
	{
		if((C[cc] > 0 && C[cc+1] < 0))
		{
			cout << "There is a convergence at " << myVariable << " = " << A[cc] << endl;
		}

		else
		{
			cout << "There is a divergence at " << myVariable << " = " << A[cc] << endl;
		}
	}

	keyStroke();

	return;
}*/

//If this works, gut the part in getDegree which asks for input and stores it.
vector<int> DirectionFields1::keyStroke()
{
	vector<int> KS;
	cout << "Welcome to keyStroke, a function designed to enhance your experience with DirectionFields." << endl;


	float c;
	int flag = 0;
	float myFinal = 1;
	float number;
	float current = 1;
	int checker = -1;

	while(flag != 1)
	{
		cout << "myFinal = " << myFinal << endl;
		cout << "Here are the options.\n1. If the variable is added to a number, press 1.\n"
					<<"2. If the variable is subtracted by a number, press 2.\n"
					<< "3. If a number is subtracted by the variable, press 3.\n"
					<< "4. If you are finished with the inside of the chunk, but it's raised to a power, press 4.\n" 
					<< "5. If the variable is multiplied by a number, press 5.\n" 
					<< "6. If you are finished with the chunk, press 6.\n" 
					<< "7. When you are done with the equation, press 7."<< endl;
		cin >> checker;
		KS.push_back(checker);
		if(checker == 1)
		{
			cout << "Please enter the number." << endl;
			cin >> number;
			KS.push_back(number);
			//current = B[i] + number;
		}
		else if(checker == 2)
		{
			cout << "Please enter the number." << endl;
			cin >> number;
			KS.push_back(number);
			//current = B[i] - number;
		}
		else if(checker == 3)
		{
			cout << "Please enter the number." << endl;
			cin >> number;
			KS.push_back(number);
			//current = number - B[i];
		}
		else if(checker == 4)
		{
			cout << "Please enter the number." << endl;
			cin >> number;
			KS.push_back(number);
			//current = pow(current, number);
		}
		else if(checker == 5)
		{
			cout << "Please enter the number." << endl;
			cin >> number;
			KS.push_back(number);
			//current = number*B[i];
		}
		else if(checker == 6)
		{
			myFinal *= current;
		}

		else
		{
			flag = 1;
		}
				
				
	}

	/*cout << "Contents of the KS vector:" << endl;
	for(int abc = 0; abc < KS.size(); abc++)
	{
		cout << KS[abc] << endl;
	}*/

	return KS;
}


void DirectionFields1::run()
{
	char myVariable = 'y';
	cout << "Please enter the variable being used. (x or y, or z.)" << endl;
	cin >> myVariable;
	vector<float> C;
	vector<float> A;
	//A.push_back(-1);
	//A.push_back(1);
	//A.push_back(2);
	int flagComing = 0;
	float temp1;
	cout << "Please enter the lines (y= 0, for example), in ascending order." << endl;
	while(flagComing != 1)
	{
		cout << "If you are done enter values, press 1." << endl;
		cin >> flagComing;
		if(flagComing != 1)
		{
			cout << "Enter the next number." << endl;
			cin >> temp1;
			A.push_back(temp1);
		}
	}

	vector<float> B;
	//B.push_back(-2);
	//B.push_back(0);
	//B.push_back(1.5);
	//B.push_back(3);
	for(int aa = 0; aa < A.size(); aa++)
	{
		if(aa == 0)
		{
			B.push_back(A[aa]-1);
		}
		else
		{
			B.push_back((A[aa-1]+A[aa])/2.0);
		}

		if(aa == (A.size()-1))
		{
			B.push_back(A[aa]+1);
		}
	}

	for(int jj = 0; jj < B.size(); jj++)
	{
		cout << B[jj] << endl;
	}

	float c;
	int flag = 0;
	float myFinal = 1;
	float number;
	float current = 1;
	int checker = -1;

	vector<int> mySequence;
	mySequence = keyStroke();
	int sequenceCounter = 0;

	for(int i = 0; i < B.size(); i++)
	{
			cout << "\n*************** Round #" << i << " *********************" << endl;
			while(flag != 1 && sequenceCounter < mySequence.size())
			{
				/*cout << "myFinal = " << myFinal << endl;
				cout << "Here are the options.\n1. If the variable is added to a number, press 1.\n"
							<<"2. If the variable is subtracted by a number, press 2.\n"
						<< "3. If a number is subtracted by the variable, press 3.\n"
						<< "4. If you are finished with the inside of the chunk, but it's raised to a power, press 4.\n" 
						<< "5. If the variable is multiplied by a number, press 5.\n" 
						<< "6. If you are finished with the chunk, press 6.\n" 
						<< "7. When you are done with the equation, press 7."<< endl;
				cin >> checker;*/
				checker = mySequence[sequenceCounter];
				sequenceCounter++;
				if(checker == 1)
				{
					//cout << "Please enter the number." << endl;
					//cin >> number;
					//current = B[i] + number;
					current = B[i] + mySequence[sequenceCounter];
					sequenceCounter++;
				}
				else if(checker == 2)
				{
					//cout << "Please enter the number." << endl;
					//cin >> number;
					//current = B[i] - number;
					current = B[i] - mySequence[sequenceCounter];
					sequenceCounter++;
				}
				else if(checker == 3)
				{
					//cout << "Please enter the number." << endl;
					//cin >> number;
					//current = number - B[i];
					current = mySequence[sequenceCounter] - B[i];
					sequenceCounter++;
				}
				else if(checker == 4)
				{
					//cout << "Please enter the number." << endl;
					//cin >> number;
					//current = pow(current, number);
					current = pow(current, mySequence[sequenceCounter]);
					sequenceCounter++;
				}
				else if(checker == 5)
				{
					//cout << "Please enter the number." << endl;
					//cin >> number;
					//current = number*B[i];
					current = mySequence[sequenceCounter] * B[i];
					sequenceCounter++;
				}
				else if(checker == 6)
				{
					myFinal *= current;
				}

				else
				{
					flag = 1;
				}
				
				
			}
		
		cout << "******************\n" << myFinal << "\n***********************" << endl;
		C.push_back(myFinal);
		flag = 0;
		myFinal = 1;
		current = 1;
		sequenceCounter = 0;
	}
	cout << "Values are = ";

	for(int bb = 0; bb < C.size(); bb++)
	{
		cout << C[bb] << ", ";
	}
	cout << "\n\n*************************************\n**************************************" << endl;

	for(int cc = 0; cc < A.size(); cc++)
	{
		if((C[cc] > 0 && C[cc+1] < 0))
		{
			cout << "There is a convergence at " << myVariable << " = " << A[cc] << endl;
		}

		else
		{
			cout << "There is a divergence at " << myVariable << " = " << A[cc] << endl;
		}
	}


	return;
}



DirectionFields1::~DirectionFields1()
{

}
/*
36
-2
-0.3125
16
*/

/*
For the example y' = (y-2)(y+1)(1-y)^2, use the below sequence.
*/

//-1
//1
//2

//2, 2, 6
//1, 1, 6
//3, 1, 4, 2, 6
//7

/*
It also works for y' = 2y(y-2)

(y = 0, 2), so values to check are -1, 1, 3.
5, 2, 6
2, 2, 6
7

In addition, it worked for y' = y

*/
