#include <iostream>
#include <cstring>

using namespace std;
int main() 

{
char arrays[5][50];
int n=0;
cout<<"Enter names :\n";
while(cin.getline(arrays[n++], 50))
	;
--n;
for (int i = 2; i < n; i++)
{
	cout<<"->: "<<arrays[i]<<endl;
}
return 0;
}



