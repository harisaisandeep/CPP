#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{
	int t,T;
	cin >> T;
	int board[4][4];
	set<int> s;
	int i,j;
 
	for( t = 0; t < T; t++)
	{
		int row;
		s.clear(); //start fresh
 
		//read the first selected row and board
		cin >> row; 
		for( i = 0; i < 4; i++ )
		{
			for( j = 0; j < 4; j++ )
			{
				cin >> board[i][j];
			}
		}
		//insert the the selected row elements into a set
		for( i = 0; i < 4; i++ )
		{
			s.insert(board[row-1][i]); 
		}
 
		//read the second selected row and board
		cin >> row;
 
		for( i = 0; i < 4; i++)
		{
			for( j = 0; j < 4; j++ )
			{
				cin >> board[i][j];
			}
		}
 
		//find the intersection results into a vector
		vector<int> result;
		result.clear();
		for( i = 0; i < 4; i++ )
		{
			if( s.find(board[row-1][i]) != s.end() )
			{
				result.push_back(board[row-1][i]);
			}
		}
		//cout << "Case #" << (t+1) << ": ";
for (vector<int>::iterator n=result.begin();n!=result.end();n++)
	{
		cout<<"-> "<<*n<<endl;
	}
	
		cout<<"---------"<<endl;
		//determine the results
		if( result.size() == 1 )
			cout << result[0];
		else if( result.size() > 1 )
			cout << "Bad magician!";
		else
			cout << "Volunteer cheated!";
		cout << endl;
	}
 
	return 0;
}
