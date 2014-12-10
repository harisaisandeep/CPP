#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ifstream infile("input.txt");
ofstream outfile("output.txt");

string word;
char c;
while(infile >> word)
{
	if(word[0]>= 'a' && word[0] <='z'){word[0]+='A'-'a';}
	outfile<<word;
	infile.get(c);
	outfile.put(c);
}


	return 0;
}