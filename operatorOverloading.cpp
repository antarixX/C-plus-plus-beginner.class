//operator overloading on strings
#include<iostream>
#include<conio.h>
using namespace std;
class STRING {
	char strng[30];
public:
	void getstrng() {
		   cin>>strng;
	   }
	   STRING operator+(STRING);
	   int operator<=(STRING);
	   friend int operator>=(STRING &,STRING &);
	   void show() {
		   cout<<strng;
	   }
};

STRING STRING::operator+(STRING S) {
	STRING temp;
	int c=0;
	for(int i=0;i<30;i++) {
		if(strng[i]==NULL)
			break;
		temp.strng[i]=strng[i];
		c++;
	}
	temp.strng[c]=' ';
	for(int i=c+1,j=0;i<30;i++,j++) {
		if(S.strng[i]==NULL)
			break;
		temp.strng[i]=S.strng[j];
	}
	return(temp);
}

int STRING::operator<=(STRING P) {
	int c1=0,c2=0;
	for(int i=0;i<30;i++) {
		if(strng[i]==NULL)
			break;
		c1++;
	}

	for(int i=0;i<30;i++) {
		if(P.strng[i]==NULL)
			break;
		c2++;
	}

	if(c1<=c2)
		return 1;
	else
	return 0;
}

int operator>=(STRING &A,STRING &B) {
	int c1=0,c2=0;
	for(int i=0;i<30;i++) {
		if(A.strng[i]==NULL)
			break;
		c1++;
	}
	for(int i=0;i<30;i++) {
		if(B.strng[i]==NULL)
			break;
		c2++;
	}
	if(c1>=c2)
		return 1;
	else
	return 0;
}

int main() {
	STRING s1,s2,s3,s4,s5,s6,s7;
	int m;
	cout<<"Enter a string : ";
	s1.getstrng();
	cout<<"Enter another string : ";
	s2.getstrng();
	m=(s1<=s2);
	s1.show();cout<<" <= ";s2.show();
	if(m==0) {
		cout<<" is FALSE."<<endl;
	}
	else {
			cout<<" is TRUE."<<endl;
	}
	cout<<"Enter a string : ";
	s3.getstrng();
	cout<<"Enter another string : ";
	s4.getstrng();
	m=(s3>=s4);
	s3.show();cout<<" >= ";s4.show();
	if(m==0) {
		cout<<" is FALSE."<<endl;
	}
	else {
			cout<<" is TRUE."<<endl;
	}
	cout<<"Enter a string : ";
	s5.getstrng();
	cout<<"Enter the string to be combined with the above string : ";
	s6.getstrng();
	s7=s5+s6;
	cout<<"After combining both the strings : ";
	s7.show();
	getch();
	return 0;
}
