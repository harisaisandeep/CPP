#include <iostream>
using namespace std;

int check_min(int a[],int x)
{
	int min=a[0];
for(int i=1;i<x;i++)
{
	if(a[i]<min){min=a[i];}
	else min=min;
}
	return min;
}

int add(int a[],int n)
{
	int sum=0;
   for(int i=0;i<n;i++)
   {
   	sum=sum+a[i];
   }
   return sum;
}

bool check_all_equal(int a[],int x,int m)
{	int count=0;
	for (int i = 0; i < x; ++i)
	{	
		if (a[i]==m){count++;}
	}
	if(count==x){return 1;}
	else return 0;
	return 0;
}


int main()
{
   int t_case;
   cin>>t_case;
   int no,sum;
   
   for(int i=0;i<t_case;i++)
   {
   	cin>>no;
   	int w[no];
   	
   	for(int j=0;j<no;j++) {cin>>w[j];}
   	int min=check_min(w,no);

   	while(check_min(w,no)>0)
   	{	
   		// if(min<=0){break;}
   		
   		int m=0,n=0;
   		while(add(w,no)>0 && n<no)
   		{
   			m=w[n]-min;
   			if(m){w[n]=min;}
   			else m=0;
   			n++;
   		}
   		if(check_all_equal(w,no,min)) break;
   	}
   	cout<<add(w,no)<<endl;

   }
   
    return 0;
}
