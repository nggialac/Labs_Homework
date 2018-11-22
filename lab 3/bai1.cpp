#include<iostream>
using namespace std;

class time
{
	private:
		int hours;
		int minutes;
		int seconds;	
	public:
		time();
		void setTime(int ,int ,int );
		void display();
		void sum(time, time);
};



int main()
{
	time t1,t2,t3;
	t1.display();
	t2.setTime(13, 27, 06);
	t2.display();
	t3.sum(t1,t2);
	t3.display();
	return 0;
}

time::time()
{
	hours=00;
	minutes=00;
	seconds=00;
}

void time::setTime(int h,int m, int s)
{
	hours=(h>=0&&h<24) ? h:0;
	minutes=(m>=0&&h<60) ? m:0;
	seconds=(s>=0&&h<60) ? s:0;
	
}

void time::display()
{
	cout <<hours<<":"<<minutes<<":"<<seconds<<endl;
}
	void time::sum(time t1 ,time t2 )
{
	seconds=t1.seconds+t2.seconds;
	minutes=seconds/60;
	seconds=seconds%60;
	minutes=minutes+t1.minutes+t2.minutes;
	hours=minutes/60;
	minutes=minutes%60;
	hours=hours+t1.hours+t2.hours;
}
