#include <iostream>
#include <vector>
using namespace std;

int main()
{
	float T,t,sum,s,ans,ans_temp,temp;
	int lim,n;
	int cookie;
	cin>>T;
	float A[3];
	cout<<endl;
	for (int i= 0; i< T; i++)
	{
		s=2;sum=0;cookie=0;ans=0;ans_temp=0;temp=0;n=2;  //set to 0(for each loop)
		
		for(int j=0;j<3;j++){cin>>A[j];} 				//getting everything into array
		float c =A[0];
		float f =A[1];
		float x=A[2]; 									//assign values
		int k=0;
		lim=(x/c);

		vector<float> dur;								//init vector
		dur.clear();
		
		while(cookie<x)
		{
			while(k<=lim)
			{
				t = (c/s);
				dur.push_back(t);
				s+= f;k++;
			}
			if(k>lim)
			{
				t=(x/s);
				dur.push_back(t);
				cookie = x;	break;
			}
		}
		for (vector<float>::iterator it=dur.begin(); it != dur.end(); it++)
		{
			ans = sum+(x/n);
			if(temp <= ans && n!=2){ans = temp;}
			sum+= *it;
			ans_temp = sum+(x/n);
			if(ans>=ans_temp && n!=2){ans= ans_temp;}
			temp=ans;
			//cout<<" "<<*it<<endl;
			n+=f;

		}
		cout<<"Case #"<<i+1<<": "<<ans<<endl;
	}
}