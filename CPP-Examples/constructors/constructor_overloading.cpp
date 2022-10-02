// Example

#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int rno;
	char name[50];
	double fee;

	public:
	student(int,char[],double);

    student(int no,double f)
    {
        rno=no;
        strcpy(name,"XXX");
        fee=f;
    }
	void display();
	
};

student::student(int no,char n[],double f)
{
	rno=no;
	strcpy(name,n);
	fee=f;
}

void student::display()
{
	cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
}
	
int main()
{
	student s(1001,"Ram",10000);
	s.display();

    student s1(1002,10000);
	s1.display();
	return 0;
}
