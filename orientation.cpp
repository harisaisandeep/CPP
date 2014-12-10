#include <iostream>
using namespace std;

class Orienteering {
private:
	int n,m;
public:
	static int r,c;
	Orienteering()	//constructor Fn
	{
		cin>>c>>r;
		for (int i = 0; i < r; ++i)
		{
			for (int j = 0; j < c; ++j)
				{cin>>box[i][j];}
		}
	};
	int goals[2][2];
	int check_points[][2];
	//void finds_axis();
	void main();
};

void Orienteering::main()
{

}

void Orienteering::finds_axis()
{
		m=0;n=0;
		for (int i = 0; i < r; ++i)
		{	
			for (int j = 0; j < c; ++j)	
			{	
				if(box[i][j]=='#'){continue;}
				else if(box[i][j]=='@'){check_points[m][n]=i;check_points[m][n+1]=j;m++;}
				else if(box[i][j]=='S'){goals[0][0]=i;goals[0][1]=j;}
				else if(box[i][j]=='G'){goals[1][0]=i;goals[1][1]=j;}
			}
		}	
}
void distance(int x,int y,int z)
{
	int d;
	for(int i=0;i<x;i++)
	{
		d = ((check_points[i][i+1])-y)+(check_points[i][i+1])-x);
cout<<d<<endl;
	}

}


int main()
{
Orienteering o;
o.finds_axis();
o.main();



return 0;

}
