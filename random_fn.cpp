#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
// int stud,quiz;
// 	cout<<"Enter no of Students :";
// 	cin>>stud;
// 	cout<<"Enter no of quizzes :";
// 	cin>>quiz;
const int stud = 5;
const int quiz =7;


typedef int Score[stud][quiz];

void marks(Score a) 				//Assigning random marks
{

int min = 10;
int max=100;
int range = (min-max) +1;

for (int i = 0; i < stud; i++)
{	
	for (int j = 0; j < quiz; j++)
	{		
		int r = rand ()/100%range + min;
		a[i][j] = r;
	}
}

}

void class_average(Score a)		//Displaying class average
{
for (int i = 0; i < quiz; i++)
{
	cout <<"Average score of class in QUIZ "<< i <<" : ";

	float sum = 0;
	cout<<"haha"<<sum;
	for (int j = 0; j < stud; j++)
	{
		cout<<"...";
		sum = sum + a[j][i];
	}
	cout<<(sum/stud)<<endl;
}
}

void student_average(Score a)		//Displaying student average
{

for (int i = 0; i < stud; i++)
{
		cout <<"Average score of Student : "<< i <<" : ";

	float sum = 0;
	for (int j = 0; j < quiz; j++)
	{
cout<<"...";
		sum = sum + a[i][j];
	}
	cout<<(sum/quiz)<<endl;
}
}

void display_marks(Score a)		//Displaying the marks
{
for (int i = 0; i < stud; i++)
{
		cout <<"Marks of students : "<< i <<" : ";

	for (int j = 0; j < quiz; j++)
	{
	cout<<a[i][j]<< setw(5);	
	}
	cout<<endl;
}
}



int main()
{
	Score a;			//Declaration of array 

	marks(a);	//assigning marks for the student for each quiz
	display_marks(a);
	cout<<endl;
	class_average(a);cout<<endl;
	student_average(a);cout<<endl;

}
