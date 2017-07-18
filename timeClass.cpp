//Class to perform arithmetic operations on complex numbers
//Bug warning
#include<iostream>
#include<conio.h>
using namespace std;
class time {	
	int hour;
	int min;
	int sec;
public:
	void get_time()
	{cout<<"Enter the time\nHours : ";
	cin>>hour;
	cout<<"Minuites : ";
	cin>>min;
	cout<<"Seconds : ";
	cin>>sec;}
	void add(time &,time &);
	void display();
	void detect();
};

void time::detect() {
	if(hour>=12) {	
		if(hour>12)
			hour=hour-12;
	cout<<"Time is\n"<<hour<<":"<<min<<":"<<sec<<"PM"<<endl;
	return;
	}
	cout<<"Time is\n"<<hour<<":"<<min<<":"<<sec<<"AM"<<endl;
}

void time::add(time &X,time &Y) {
	sec=X.sec+Y.sec;
	min=sec/60;
	sec=sec%60;
	min=min+X.min+Y.min;
	hour=min/60;
	min=min%60;
	hour=hour+X.hour+Y.hour;
}

void time::display() {
	cout<<hour<<" Hours "<<min<<" Minutes "<<sec<<" Seconds"<<endl;
}

void main() {
	time T1,T2,T3;
	T1.get_time();
	T2.get_time();
	T3.add(T1,T2);
	cout<<"After adding both the timings"<<endl;
	T3.display();
	T3.detect();
	getch();
}
