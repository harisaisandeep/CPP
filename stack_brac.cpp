#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	stack<char>r;
	string s;
	cin>>s;
	int len,i=0;
	len=s.length();
 while(i<len)
	{
	  if(s[i]=='[' || s[i]=='{' || s[i]=='(' )
		{	
			r.push(s[i]);
		}
	  else if(s[i]==']' || s[i]=='}' || s[i]==')' )
		{	
		  switch(s[i])
			{
			case ']': if(r.top()=='['){r.pop();}break;
			case '}': if(r.top()=='{'){r.pop();}break;
			case ')': if(r.top()=='('){r.pop();}break;
			}
		}
 i++;
	}

 if(r.empty())cout<<"This is balanced,Hence TRUE"<<endl;
 else cout<<"Not Balanced and FALSE"<<endl;
return 0;
}