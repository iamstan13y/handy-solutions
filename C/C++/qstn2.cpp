#include <iostream>

using namespace std;

int main()
{
	char solutions[] = {'A', 'B', 'D', 'C', 'B', 'A', 
								'A', 'C', 'B', 'A', 'D', 'D', 
								'D', 'B', 'A', 'B', 'A', 'C', 'A', 'D'};
	
	char responses[20];
	int correctAnswers = 0;
	cout<<"Enter the multiple choice answers below:\n";
	
	int i;
	char input;
	for (i = 0; i < 20; i++)
	{
		cin>>input;
		responses[i] = input;
	}
	
	for (i = 0; i < 20; i++)
	{
		if (responses[i] == solutions[i])
		{
			correctAnswers++;
		}
	}
	
	double percentage = (correctAnswers * 100) / 20;

	if (correctAnswers >= 15)
	{
		cout<<"\nYOU'VE PASSED"<<endl;
	} else 
	{
		cout<<"\nYOU FAILED!"<<endl;
	}
	
	int wrongAnswers = 20 - correctAnswers;
	cout<<"Correct Answers: "<<correctAnswers<<" out of 20."<<endl;
	cout<<"Wrong Answers: "<<wrongAnswers<<endl;
	cout<<"Pass Percentage: "<<percentage<<"%"<<endl;
}
