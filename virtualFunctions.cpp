//virtual functions
#include<iostream>
#include<conio.h>
using namespace std;

class Integer {
	int x,y;
public:
	
	Integer() {
		x=0;
		y=0;
	}

	virtual void calc()=0;
	
	void getdata() {
		cout<<"Enter First Number : ";
		cin>>x;
		cout<<"Enter Second Number : ";
		cin>>y;
	}

	void add() {
		cout<<x+y<<endl;
	}

	void sub() {
		cout<<x-y<<endl;
	}

	void virtual display() {
		cout<<"Base Class"<<endl;
	}
};
class D: public Integer {
public:
	void display() {
		cout<<"Derived Class D"<<endl;
	}

	void calc() {
		add();
	}
};

class E: public Integer {
public:
	void display() {
		cout<<"Derived Class E"<<endl;
	}

	void calc() {
		sub();
	}
};

int main() {
	D der;
	E der2;
    Integer*ptr;
	ptr=& der;
	ptr->display();
	ptr->getdata();
	cout<<"On Adding the two numbers : ";
	ptr->calc();
	ptr=&der2;
	ptr->display();
	ptr->getdata();
	cout<<"On Subtracting the second number from first : ";
	ptr->calc();
	getch();
	return 0;
}

