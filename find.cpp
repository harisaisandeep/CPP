#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
string s;
cin>>s;
int len = s.length();
int count=1;
std::vector<char> v;
std::vector<int> c;

v.push_back(s[0]);
for (int i = 1; i < len; ++i)
{
	if(s[i]==s[i-1]){count++;}
	else {c.push_back(count);v.push_back(s[i]);count=1;}
	if(i==(len-1)){c.push_back(count);}


}

for (int i = 0; i < v.size(); ++i)
{
	cout<<v[i]<<c[i];
}

}