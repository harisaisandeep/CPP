/* measuring a certain quanity using two jars of certain quantities which are of co-primes */
#include <iostream>
using namespace std;
struct vessle
{
int max_cap;
int cap_fill;
}v1,v2;

void transfer(int x)
{
	v1.cap_fill=x;

	if(v1.cap_fill<(v2.max_cap-v2.cap_fill))
		{v2.cap_fill +=v1.cap_fill;v1.cap_fill=0;}
	 else 												//(v1.cap_fill>=(v2.max_cap-v2.cap_fill))
		{v1.cap_fill -=(v2.max_cap-v2.cap_fill);v2.cap_fill=v2.max_cap;}
}

int main()
{	
	cout<<"Insert HIGHER,LOWER and QUANTITY TO MEASURE:"<<endl;
	int out;
	cin>>v1.max_cap>>v2.max_cap>>out;

	while(v1.cap_fill!=out)
	{
		if(v1.cap_fill==0)
		{
			v1.cap_fill = v1.max_cap;
		
			transfer(v1.cap_fill);
			cout<<"Cap from A:"<<v1.cap_fill<<"   "<<"Cap from B:"<<v2.cap_fill<<endl;
			
			if(v1.cap_fill!=out)
				{
					v2.cap_fill=0;transfer(v1.cap_fill);
					cout<<"Cap from A:"<<v1.cap_fill<<"   "<<"Cap from B:"<<v2.cap_fill<<endl;
				}
			if(v1.cap_fill==out){break;}
		}

	}
	if(v1.cap_fill==out){cout<<"Steps Completed"<<endl;}

} //main fn