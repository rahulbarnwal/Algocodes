#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	int x=0;
	cin>>n;

	String s[n];

	for(i=0;i<n;i++)
		{
			getline(cin,s[i]);
			if(s[0]=="+" || s[1]=="+")
				x++;
			if(s[0]=="-" || s[1]=="-")
				x--;
		}


	cout<<x;
	return 0;

}