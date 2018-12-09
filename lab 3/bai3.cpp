#include <iostream>
using namespace std;

class produce
{
	public:
		static int dem;
		int serialNumber;
		produce();
		void output();
};


int main()
{
	produce produce1;
	produce1.output();
	produce produce2;
	produce2.output();
	produce produce3;
	produce3.output();
	cout<<"Total: "<<produce::dem;
	return 0;
	
}
produce::produce()
{
	dem++;
}
int produce::dem=0;
void produce::output()
{
	cout<<"I am serial number: "<<dem<<endl;
}
