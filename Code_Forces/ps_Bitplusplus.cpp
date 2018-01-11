#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int n,i;
	int x=0;
	cin>>n;

	string temp;
	vector<string> s;

	for(i=0;i<n;i++)
		{	
			//getline(cin,temp);
			cin>>temp;
			s.push_back(temp);
			if( s[i][0] =='+' || s[i][1]=='+')
				x++;
			if(s[i][0]=='-' || s[i][1]=='-')
				x--;
		}


	cout<<x;
	return 0;

}