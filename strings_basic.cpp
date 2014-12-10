//creating a function to take in th string values and to perform a function.

#include <iostream>
#include <cstring>
using namespace std;

//introducing global values
const int n=20;
typedef char words[20];

void get_all_line(words line)
{
	do
	{
	cin.getline(line,20,' ');
		if (*line)
		{
			cout<<"word is :"<<line<<endl;
		}
	}
	while(*line);
}

void get_all(words line)
{
char y ;
int count =0;
	while(cin.get(y))
	{
		if( y == 'e'){count++;}	}
cout<<count;
}

int main()
{				
words line;
get_all_line(line);
//get_all(line);





				//METHOD 1 FOR GETTING INPUT
	// 	char a[50];
	// cin>>a;
	// while(*a)
	// {
	// cout<<"The word is :"<<a<<endl;
	// cin>>a;

	// }

//pointers
	// int x=50;
	// cout<<"The value of X is :"<<x<<endl;
	// cout<<"The value of &X :"<<&x<<endl;
	// int &y =x; 				// allias of X
	// cout<<"The value of Y is :"<<y<<"As this is the alias of X the values are same"<<endl;
	// cout<<"The value of &Y :"<<&x<<endl;
	// int* p = &y; // P is a pointer which is pointing to the address of Y 
	// cout<<"The value of just p :"<<p<<"The value of *p :"<<*p<<endl;
	return 0;
}