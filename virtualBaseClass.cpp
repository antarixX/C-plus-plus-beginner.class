//virtual base class
#include<iostream>
#include<conio.h>
using namespace std;

class student {
  char name[20];
  int rno;
  public:
  void getdata() {
     cout<<"Enter Name : ";
     cin>>name;
     cout<<"Enter Roll No : ";
          cin>>rno;
  }

  void dispdet() {
     cout<<"\nName : "<<name<<endl;       
     cout<<"Roll No : "<<rno<<endl;
  }
};

class test:virtual public student {
protected:
  int m1,m2;
public:
  void getmarks() {
    cout<<"Enter Marks\n";
    cout<<"Subject 1 : ";
    cin>>m1;
    cout<<"Subject 2 : ";
    cin>>m2;
   }

   void dispmarks() {
    cout<<"Marks Obtained : "<<endl;
    cout<<"Subject 1 : "<<m1<<endl;
    cout<<"Subject 2 : "<<m2<<endl;
  }
};

class sports:public virtual student {
protected:
    int smarks;
public:
    void getsmarks() {
      cout<<"Enter Sports Marks : ";
      cin>>smarks;
    }
    void dispsmarks() {
      cout<<"Sports Marks : "<<smarks<<endl;
    }
};

class result:public test,public sports {
    int total;
  public:
    void dispresult() {
      total=m1+m2+smarks;
      dispdet();
      dispmarks();
      dispsmarks();
      cout<<"Total Marks : "<<total<<endl;
   }
};

int main() {
  result obj;
  obj.getdata();
  obj.getmarks();
  obj.getsmarks();
  obj.dispresult();
  getch();
  return 0;
}
