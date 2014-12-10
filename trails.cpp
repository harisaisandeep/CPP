//by sandeep
#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef vector<string> strings;

void get_strings(int n,string&)
{
	string s[3];
	for(int i=0;i<n;i++)
		cin>>s[i];
}

int check_strings(string a,string b,strings& str)
{
string s1 = a;int i=0;
string string_push= " ";
string s2 = b;
	if (s1[i]==s2[i])
	{
		 string_push+= s1[i];i++;
		 if(s1[i]==s2[i])
		 {	
		 	string_push+= s1[i];i++;
		 	if(s1[i]==s2[i]){string_push+= s1[i];str.push_back(string_push);return 0;}
		 	else{string_push+= (s1[i]+s2[i]); str.push_back(string_push);return 0;}
		 }

	}
	// else (s1[i+1]==s2[i])
	// {
	// 	str.push_back(s1[i]);i++;		
	// }

	
return 0;
}


int main()
{
int n,k;
strings str;
string s[n];
cin>>n;cin>>k;
get_strings(n,s[n]);
// string s1=s[0];string s2 = s[1];string s3 = s[2];
string check = s[0];

for (int i = 1; i < n; ++i)
{
	check_strings(s[0],s[i],str);
}
int i=0;
for (vector<string>::iterator it =str.begin();it!= str.end(); ++it,++i)
{
	cout<<"> "<<str[i]<<endl;
}
return 0;
}

