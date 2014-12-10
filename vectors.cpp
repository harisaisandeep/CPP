#include <iostream>
#include <vector>
using namespace std;

int main()
{

vector<int> myvec;
for (int i = 0; i < 10; i++)
{
	myvec.push_back(i);
}
int j=0;
for (vector<int>::iterator n = myvec.lbegin();n!=myvec.end();n++,j++)
{
	cout<<"a["<<j<<"]-> "<<*n<<endl;
}



}