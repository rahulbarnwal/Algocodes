#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>
using namespace std;
#define tr(c,it)  for(typeof(c.begin()) it=c.begin(); it!=c.end();it++)  



int main() {
     int n,sumx=0,sumy=0;
     cin>>n;
     multiset<int> X,Y;
     int i,temp;
     for(i=0;i<n;i++){
       cin>>temp;
       sumx+=temp
       X.insert(temp);
     }
     //cout<<endl;
     for(i=0;i<n;i++){
        cin>>temp;
        sumy+=temp;
        Y.insert(temp);
     }
     
     
    /** cout<<"the size of X and Y="<<X.size()<<" "<<Y.size();
     cout<<endl<<"the multiset X=";
     tr(X,it){
      cout<<*it<<" ";
      }
     cout<<endl;
     tr(Y,it){
      cout<<*it<<" ";
      }
     cout<<endl;*/
      
      if(sumx!=sumy){
        cout<<-1;
        return 0;
        }
      else
      {  
        
      
      
      
        
     
    return 0;
}
