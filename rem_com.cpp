#include <iostream>
#include <string>
using namespace std;


int main()
{
char ch;
int count=0;
char space = ' ';
while(cin.get(ch))
{
	if(ch=='/'|| count== 1)
	{
			cout.put(space);count = 1;	
	}
	else if (ch=='\0'){cout<<"Line ";count = 0;}
	else cout.put(ch);
}



return 0;

}