#include <iostream>
using namespace std;

int four_digit(int x,int y,int z,int w)
{
int n = ((x*1000)+(y*100)+(z*10)+w);
return n;

}
int main()
{

int a,b,c,d,e,count=0;

for (int a = 1; a <= 9; a++)
{
	for (int b = 1; b <= 9; b++)
	{
		for (int c = 1; c < 9; c++)
		{
			for (int d = 1; d <= 9; d++)
			{
				for (int e = 1; e <= 7; e++)
				{
					int x = (four_digit(a,b,c,d))*e;
					int y = (four_digit(d,c,b,a));count++;
					if((x==y) && (a!=b) && (b!=c) && (c!=d) && (d!=e) && (e!=a))
					{cout<<"a:"<<a<<endl<<"b:"<<b<<endl<<"c:"<<c<<endl<<"d:"<<d<<endl<<"e:"<<e<<endl<<count<<endl<<"------------"<<endl;break;}

				}
			}
		}
	}

}


}