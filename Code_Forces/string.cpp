#include<iostream>
#include<string>


using namespace std;

int main()
{	
	int n;
	cin>>n;
	string s[n];
	int i;
	for(i=0;i<n;i++)
	{
		cout<<i;
		getline(cin,s[i]);
	}

	for(i=0;i<n;i++)cout<<s[i]<<endl;

	return 0;
}
