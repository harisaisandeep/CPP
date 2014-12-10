#include <iostream>
#include "date.h"
using namespace std;

class Person
{
public:
	Person(string z,int x=100,int y=0):name(z),id(x),sex(y){}

void print_all()
	{
		cout<<"name :"<<name<<endl<<"id :"<<id<<"\nsex :"<<gender_check(sex)<<endl;
	}

void Create_DoB(int m,int n,int o)
{
dob.setDate(m,n,o);
}

void Create_DoD(int m,int n,int o)
{
dod.setDate(m,n,o);
}



private:
	string name,gender;
	int id,sex;
	date dob,dod;
string gender_check(int l)
	{
		if (l==0)gender = "male";
		else gender = "female";
		return gender;
	}

};

int main()
{
	Person student("sandeep",10214002,0);
	student.Create_DoB(25,05,1993);
	student.Create_DoD(22,04,2100);
	student.print_all();
	


}