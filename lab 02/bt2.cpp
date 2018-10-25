#include <iostream>
using namespace std;
#include <math.h>

void nhapxuat(float a,int b,float c);
float total(float a,int b,float c);
int main()
{
	int b;
	float a,c;
	nhapxuat(a,b,c);
}
float total(float a,int b,float c)
{
	float s=a;
	for(int i=1;i<=b;i++)
		s=s+s*(c/100);
	return s;
}
void nhapxuat(float a,int b,float c)
{
	cout<<"Enter intial amount, number of years and interest rate: ";
	cin>>a>>b>>c;
	cout<<"\nAt the end of "<<b<<" years, you will have "<<total(a,b,c)<<" dollars";
}
