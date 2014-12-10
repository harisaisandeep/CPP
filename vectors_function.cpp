#include <iostream>
#include <vector>
using namespace std;

void inserts(vector<int> &num,int a)
{
    num.push_back(a);
}

void prints(vector<int> &num)
{
    for(auto& it:num)
    cout<<it<<" ";
    cout<<endl;
}
void sum(vector<int> &num)
{
    int sum=0;
    for(auto& it:num)
    {
        sum+=it;
        num.pop_back();
    }
    cout<<"the sum: "<<sum<<endl;
}

//main function 
int main()
{
int x;
cin>>x;
vector<int> num;

while(x>=0)
{
    inserts(num,x);
    cin>>x;
}
prints(num);    
sum(num);
}
