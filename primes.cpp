#include <iostream>
using namespace std;

int main()
{
    int no_pr,no_qu;
    cin>>no_pr>>no_qu;
    int primes[no_pr],range[2];
    int count=0;
    int d,rem,r;
    
    for(int i=0;i<no_pr;i++){cin>>primes[i];}
    for(int i=0;i<2;i++){cin>>range[i];}
    
    r =range[1]-range[0]+1;
    
    iqnt elem[r];
    int s=range[0];

    for(int i=0;i<r;i++)
    {	
    	elem[i]=s;s++;
    }
    for(int x=0;x<no_qu;x++)
    {
        for(int i=0;i<no_pr;i++)
        {   
            int d =primes[i]; 
        	
            for(int j=0;j<r;j++)
        	{  
        		rem=(elem[j])%(d);
        		if(rem==0 && (elem[j]!=0)){elem[j]=0;count+=1;}
        	}
        	
        }
     cout<<count<<endl;

    }
    
    return 0;
}
