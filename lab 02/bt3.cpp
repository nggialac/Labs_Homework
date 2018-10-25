#include <iostream>
using namespace std;

double add(float a, float b);
double sub(float a, float b);
double mul(float a, float b);
double div(float a, float b);

int main()
{
	float a;
	float b;
	char toantu;
	char is;
	do{
		cout<<"\nEnter first number, operator, second number: ";
		cin>>a>>toantu>>b;
		switch(toantu)
		{
			case '+':
				{
					cout<<add(a,b)<<endl;
					break;
				}
			case '-':
				{
					cout<<sub(a,b)<<endl;
					break;
				}
			case '*':
			{
				cout<<mul(a,b)<<endl;
				break;	
			}
			case '/':
			{
				cout<<div(a,b)<<endl;
				break;	
			}
		}
	
			cout<<"\nDo another? (y/n) ";
			cin>>is;
		if (is=='n')
		{
			return 0;
		}
	
		
		
	}while (toantu!='+','-','*','/');
	
	
	return 0;
	
}
double add(float a, float b)
{
	return (a+b);
}
double sub(float a, float b)
{
	
	return (a-b);
}
double mul(float a, float b)
{
	return (a*b);
	
}
double div(float a, float b)
{
	return (a/b);
}
