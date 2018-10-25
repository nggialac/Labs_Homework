#include <iostream>
using namespace std;
#include <string>

struct phonenumber
{
	string areacode;
	string exchange;
	string number;
};

typedef struct phonenumber phonenumber;

void input(phonenumber &sdt);
void output(phonenumber sdt);

int main()
{
	struct phonenumber nb1;
	struct phonenumber nb2;
	input(nb1);
	output(nb1);	
	return 0;
}

void input(phonenumber &sdt)
{
	cout<<"\nEnter your area code, exchange and number: ";
	cin>>sdt.areacode>>sdt.exchange>>sdt.number;
}

void output(phonenumber sdt)
{
	cout<<"\nYour number is ("<<sdt.areacode<<") "<<sdt.exchange<<"-"<<sdt.number<<endl;
}





