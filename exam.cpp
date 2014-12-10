#include <iostream>
using namespace std;

class exam
{
public:
	static int r,c;
	exam(){cin>>r>>c;};
	
	int goals[2][2];
	int check_points[][2];

	void print()
	{
		cout<<r<<" "<<c;

	}
};

int main()
{	
	exam X;
	int box[X.r][X.c];
	
	X.print();


	return 0;
}