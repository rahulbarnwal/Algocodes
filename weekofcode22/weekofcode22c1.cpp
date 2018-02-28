#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>
using namespace std;
#define tr(c,it)  for(typeof(c.begin()) it=c.begin(); it!=c.end();it++)  
#define all(c) c.begin(),c.end()
 
 int main(){
  int n,s1=0,s2=0;
  cin>>n;
  vector<int> X(n),Y(n);
  int i,sumx=0,sumy=0;
  for(i=0;i<n;i++){
    cin>>X[i];
    sumx+=X[i];
  }  
  for(i=0;i<n;i++){
    cin>>Y[i];
    sumy+=Y[i];
  }
  
  if(sumx!=sumy){cout<<-1;
  return 0;}
  
  else
  {
     if(n==1)
     sort(all(X));
     sort(all(Y));  
     for(i=0;i<n;i++)
      {
       if(X[i]>Y[i])s1=s1+(X[i]-Y[i]);
       else s2=s2+(X[i]-Y[i]);
      }
     if(s1==-s2) 
       {cout<<s1;return 0;}
     else cout<<-1;  
      
     
     
  }
  
  
  
 
  return 0;
  
  }
     
     
  
    
