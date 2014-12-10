#include <iostream>
using namespace std;
//class initiation

class date
{

private:
	int day,mon,year;
	char month;
    static char month_name[];
    
public:
	date(int dd=01, int mm=01, int yy=1993) : day(dd),mon(mm),year(yy){}
int setDate(int dd ,int mm,int yy){
	day = dd;mon = mm; year = yy;
	print_all(day,mon,year);

}
void print_all( int m,int n,int o)
{
	cout<<"The final date is : " <<day<<" "<<mon<<" "<<year<<endl;
}	



};

// int main()
// {
// date event(12,12,2014);
// event.setDate(13,12,2014);
// event.print_all();
// }