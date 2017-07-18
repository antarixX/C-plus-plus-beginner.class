//single level inheritance
#include<iostream>
#include<conio.h>
using namespace std;

class Box {
	float l,b,h;
public:
	void getdata() {
		cout<<"\nInput Length : ";
		cin>>l;
		cout<<"\nInput Breadth : ";
		cin>>b;
		cout<<"\nInput Height : ";
		cin>>h;
	}
	float calcvol() {
		return(l*b*h);
	}
	float calcarea() {
		return(l*b+b*h+h*l);
	}
};

class Small_Box:public Box {
public:
	void Sarea() {
		float ar;
		ar=2*calcarea();
		cout<<"\nSurface area of the Box is : "<<ar<<endl;
	}
	void Svolume() {
		float vol;
		vol=calcvol();
		cout<<"\nVolume of the Box is : "<<vol<<endl;
	}
};

int main() {
	Small_Box Sb;
	cout<<"Enter the dimensions of the Box"<<endl;
	Sb.getdata();
	Sb.Sarea();
	Sb.Svolume();
	getch();
	return 0;
}
