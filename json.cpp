#include <iostream>
#include <string>
#include <queue>
using namespace std;
queue<string> X;
queue<string> Y;

								//string cleaning
string clean(string c)
{
for (int i = 0; c[i]; i++)
{
	if(c[i]==',')
            c[i]=' ';
        if(c[i]==':')
            c[i]=' ';
        if(c[i]=='"')
            c[i]=' ';
        if(c[i]=='}')
            c[i]=' ';
        if(c[i]=='{')
            c[i]=' ';
        if(c[i]=='[')
        	c[i]= ' ';
        if(c[i]==']')
        	c[i]= ' ';	
        if(c[i]=='\'')
        	c[i]=' ';
}
	return c;
}
								//prints output to check
void outputs(string c)
{
	for (int i = 0; c[i]; ++i)cout<<c[i];
}
								//queue main function
void init(char a ,string c)
{
	string z;
	int n = c.size();

	for (int no = 0; no <n; no++)
	{
		string z ="\0";
		while(no<n && c[no]!=' ')
		{
			z+= c[no];
			no++;
		}
		
		if(a=='X'){if(z.size()>0){X.push(z);}}
		else{if(z.size()>0){Y.push(z);}}
	}

}

								//Main function
int main()
{
	string s1,s2;
	char a1='X';
	char a2='Y';
	
	cin>>s1;
	cin>>s2;
	
	s1 = clean(s1);
	s2 = clean(s2);
	
	init(a1,s1);
	init(a2,s2);
								//comparision of two strings 
	string ans="\0";
	while(!X.empty() && !Y.empty())
	{
		string top1 = X.front();
		string top2 = Y.front();
		X.pop();Y.pop();

		if(X.front()!=Y.front())
		{
			if(ans == "\0"){ans+= top1;}
			else{ans+=":"+top1;}
		}
		X.pop();
		Y.pop();
	}
	cout<<"The answer is : "<<ans<<endl;
}