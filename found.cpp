#include <iostream>
#include <string>
#include <vector>

int finds(char x,int n)
{
	for (int i = 0; i < n ; ++i)
	{
		if(x == v[i]){return i;}
		else return 0;
	}
return 0;
}

using namespace std;
int main()
{

string s;
int len,count=1;
cin>>s;
len = s.length();
std::vector<char> v;
std::vector<int> n;

v.push_back(s[0]);

for (int i = 1; i < len; ++i)
{	
	int size = v.size();
	int check=finds(s[i],size);
	if(check){count = n[i];}else{count=0;}
	
	if(s[i]==s[i-1]){count++;}
	else {c.push_back(count);v.push_back(s[i]);count=1;}
	if(i==(len-1)){c.push_back(count);}



}
	

}