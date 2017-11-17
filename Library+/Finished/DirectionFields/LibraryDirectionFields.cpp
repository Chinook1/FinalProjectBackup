#include "LibraryDirectionFields.hpp"

LibraryDirectionFields::LibraryDirectionFields()
{
	return;
}



vector<float> LibraryDirectionFields::run(vector<float> A, vector<int> keySequence)
{
	vector<float> C;
	vector<float> B;
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

	float c;
	int flag = 0;
	float myFinal = 1;
	float number;
	float current = 1;
	int checker = -1;

	vector<int> mySequence;
	mySequence = keySequence;
	int sequenceCounter = 0;

	for(int i = 0; i < B.size(); i++)
	{
			while(flag != 1 && sequenceCounter < mySequence.size())
			{
				checker = mySequence[sequenceCounter];
				sequenceCounter++;
				if(checker == 1)
				{
					current = B[i] + mySequence[sequenceCounter];
					sequenceCounter++;
				}
				else if(checker == 2)
				{
					current = B[i] - mySequence[sequenceCounter];
					sequenceCounter++;
				}
				else if(checker == 3)
				{
					current = mySequence[sequenceCounter] - B[i];
					sequenceCounter++;
				}
				else if(checker == 4)
				{
					current = pow(current, mySequence[sequenceCounter]);
					sequenceCounter++;
				}
				else if(checker == 5)
				{
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
		
		C.push_back(myFinal);
		flag = 0;
		myFinal = 1;
		current = 1;
		sequenceCounter = 0;
	}
	
	return C;
}



LibraryDirectionFields::~LibraryDirectionFields()
{

}

