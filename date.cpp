#include <iostream>
using namespace std;
//class initiation

class date
{
friend istream& operator>>(istream& ,date&);
friend ostream& operator<<(ostream& ,date&);
    
public:
	date(int dd=01, int mm=01, int yy=1993) : day(dd),mon(mm),year(yy){}
	void setDate(int dd ,int mm,int yy){day = dd;mon = mm; year = yy;}

private:
	int day,mon,year;
	char month;
};

istream& operator>>(istream& in,date& x)
{
	in>>x.day>>x.mon>>x.year;
	return in;
}
ostream& operator<<(ostream& out, date& y)
{
	static const char* month_name[13] = {"","Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"};
	out<<y.day<<" "<< month_name[y.mon]<<" "<<y.year<<endl;
	return out;

}

int main()
{
date event(12,12,2014);
cout<<"The date is :"<<event;
event.setDate(13,12,2014);
cout<<"The new date is set to :"<<event;
}