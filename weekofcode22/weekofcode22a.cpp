#include<iostream>
using namespace std;

int main(){

int n,m;
cin>>n>>m;
 int r=m%n;
 if(r==0)cout<<r;
 else
  {
   if(m<n)cout<<(n-m);
   else cout<<(n-r);
  }
 return 0;
 }  
   
