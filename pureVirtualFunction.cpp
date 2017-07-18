#include<iostream>
#include<conio.h>
using namespace std;

class media {
protected:
	char title[20];
	float price;
public:
	virtual void display()=0;
};

class book : public media {
	int pages;
public:
	void get_bk() {
		cout<<"Enter title of the book : ";cin>>title;
		cout<<"Enter price of the book : ";cin>>price;
		cout<<"Enter the number of pages in the book : ";cin>>pages;
	}

	void display() {
		cout<<"\nTitle : "<<title<<endl;;
		cout<<"Price : Rs"<<price<<"/-"<<endl;
		cout<<"Pages : "<<pages<<endl;
	}
};

class videotape : public media {
	int playtime;
public:
	void get_vt() {
		cout<<"\nEnter title of the videotape : ";cin>>title;
		cout<<"Enter price of the videotape : ";cin>>price;
		cout<<"Enter the playtime videotape : ";cin>>playtime;
	}
	
	void display() {
		cout<<"\nTitle : "<<title<<endl;
		cout<<"Price : Rs"<<price<<"/-"<<endl;
		cout<<"Playtime : "<<playtime<<"Mins"<<endl;
	}
};

void main() {
	book b1;
	videotape v1;
	b1.get_bk();
	v1.get_vt();
	cout<<"\nBOOK : \n";
	b1.display();
	cout<<"\nVIDEO TAPE : \n";
	v1.display();
	_getch();
}
