//Class to perform arithmetic operations on complex numbers
#include<iostream>
#include<conio.h>
using namespace std;

class complex {
	int real;
	int img;
public:
	void getdata()
	{cout<<"enter the real & imaginary part repectively"<<endl;
	cin>>real>>img;}
	complex add(complex);
	complex subtract(complex);
	void display();
};

void complex::display() {
	cout<<real<<" + "<<img<<"i"<<endl;
}

complex complex::add(complex ark) {
	complex temp;
	temp.real=real+ark.real;
	temp.img=img+ark.img;
	return temp;
}

complex complex::subtract(complex ark) {
	complex temp;
	temp.real=real-ark.real;
	temp.img=img-ark.img;
	return temp;
}

int main() {
	complex f,s,ans;
	cout<<"For the first number ";
	f.getdata();
	f.display();
	cout<<"For the second ";
	s.getdata();
	s.display();
	cout<<"After adding the two complex numbers :"<<endl;
	ans=f.add(s);
	ans.display();
	cout<<"After subtracting the second number from first :"<<endl;
	ans=f.subtract(s);
	ans.display();
	getch();
	return 0;
}
