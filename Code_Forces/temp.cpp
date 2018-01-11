#include <iostream>
#include<vector>
using namespace std;

int main() {
	int n,i;
	cin>>n;
	vector<int> p(n+1);
	vector<int> a(n+1);
	
	for(i=1;i<=n;i++)cin>>p[i];
	
	for(i=1;i<=n;i++)a[p[i]]=i;
	
	for(i=1;i<=n;i++)cout<<a[i];
	
	
	return 0;
}