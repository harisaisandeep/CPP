#include <iostream>
#include <string>
using namespace std;
int no_of=0;

//checking all are equal or not
int check(string c,string d,int len)
{
	// cout<<c<<endl<<d<<endl<<"----------"<<endl;
	int count=0;
for (int i = 0; i < len; i++)
{	
	if (c[i]==d[i]){count+=1;}else{count+= 0;}
}
	if(count==(len)){count = 1;}
	return count;
}

//swap all first values
int swap_first(string c,string d,int len)
{
	int ans; char temp;
	temp = d[0];d[0]=d[len-1];d[len-1]=temp;
	ans = check(c,d,len);no_of++;if(ans==1){return ans;}
	temp = d[0];d[0]=d[len-1];d[len-1]=temp;

return ans;
}

//swap all side values
int swap_all(string c,string d,int len)
{
	int ans;char temp;
	for (int i = 1; i < len-1; ++i)
		{
			temp = d[i];d[i]=d[i+1];d[i+1]=temp;					
			ans = check(c,d,len);no_of++;
			if(ans==1){return ans;}
			//temp = d[i];d[i]=d[i+1];d[i+1]=temp;					

		}	
	

return ans;
}

int solve(string c,string d)
{

	int ans;int error=0;
	int len = c.length();
	ans=check(c,d,len);
	if(ans==1){no_of=0;return no_of;}
	else
	{
		while(ans!=1 && error<20)
		{
			ans = swap_all(c,d,len);
			if(ans==1){break;}
			else
			{
				ans = swap_first(c,d,len);
				if(ans==1){break;}

			}
			error++;
		}
	}
return no_of;
}


int compare(string a,string b)
{
	int moves,x,y;
	
	x=solve(a,b);
	y=solve(b,a);
	if(x>y){moves = y;}else{moves=x;}


	return moves;
}

int main()
{
	int res;
	string s1,s2;
	cin>>s1>>s2;

	res = compare(s1,s2);
	cout<<"ans: "<<res<<endl;

}