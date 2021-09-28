#include<iostream>
using namespace std;
class time{
	public:
    	int hours;
	    int minutes;
	    int seconds;
     	int totseconds;
	public:
		displaytime();
		totalseconds();
};
time :: displaytime()
{
	if(hours<10 & minutes<10 & seconds<10)
     	cout<<"The time is = "<<0<<hours<<":"<<0<<minutes<<":"<<0<<seconds;
    else if(hours<10 & minutes<10 & seconds>10)
    	cout<<"The time is = "<<0<<hours<<":"<<0<<minutes<<":"<<seconds;
	else if(hours<10 & minutes>10 & seconds<10)
		cout<<"The time is = "<<0<<hours<<":"<<minutes<<":"<<0<<seconds;
	else if(hours>10 & minutes<10 & seconds<10)
		cout<<"The time is = "<<hours<<":"<<0<<minutes<<":"<<0<<seconds;
	else if(hours>10 & minutes>10 & seconds<10)
		cout<<"The time is = "<<hours<<":"<<minutes<<":"<<0<<seconds;
	else if(hours>10 & minutes<10 & seconds>10)
		cout<<"The time is = "<<hours<<":"<<0<<minutes<<":"<<seconds;
	else if(hours<10 & minutes>10 & seconds>10)
		cout<<"The time is = "<<0<<hours<<":"<<minutes<<":"<<seconds;
	else
		cout<<"The time is = "<<hours<<":"<<minutes<<":"<<seconds;
}
time :: totalseconds()
{
	int a,b;
	a=hours*3600;
	b=minutes*60;
	totseconds=a+b+seconds;
	cout<<"\nTime in total seconds : "<<totseconds;
}
int main()
{
	time now;
	cout<<"Enter time:";
	cout<<"Hours? ";
	cin>>now.hours;
	cout<<"Minutes? ";
	cin>>now.minutes;
	cout<<"Seconds? ";
	cin>>now.seconds;
	now.displaytime();
	now.totalseconds();
	
}
