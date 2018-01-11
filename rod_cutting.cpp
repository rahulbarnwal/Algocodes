
#define INT_MIN
#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;

int cut_Rod(int n,vector<int> pr)
{
    int i;
    int q=INT_MIN;
    if(n==0)return 0;

    for(i=1;i<=n;i++)
    {
        q = max(q, (pr[i] + cut_Rod(n-i,pr)));
    }
    return q;
}

int main()
{
    int n;
    cin>>n;
    cout<<"enter price";
    vector<int> p(n+1);
    int i;
    for(i=1;i<n;i++)cin>>p[i];
    cout<<"\nCost="<<cut_Rod(n,p);
    return 0;
}
