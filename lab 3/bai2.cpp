#include<iostream>
using namespace std;
#include<math.h>

class employee
{
	public:		
	char ID;
	float comp;
	void input();
	void output();
	float total();
};

int main()
{
	employee e1,e2,e3;
	cout<<"Enter 3 ID and 3 compensation: "<<endl;
	e1.input();
	e2.input();
	e3.input();
	e1.output();
	e2.output();
	e3.output();
	
	return 0;
}

void employee::input()
{
		cout<<"Enter ID, compensation : "<<endl;
		cin>>ID>>comp;
}

void employee::output()
{
	cout<<"\nID: "<<ID;
	cout<<"\nTotal salary: "<<total();		
}

float employee::total()
{
	return 3000*pow((1+0.055),comp);
}
