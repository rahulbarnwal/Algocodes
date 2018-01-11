#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

#define all(c) c.begin(), c.end()
#define tr(container,it)\
    for(typeof(container.begin()) it= container.begin();it!=container.end();it++)


using namespace std;

int main(){

 
 int data[]={1,2,3,4};
 vector<int> v(data,data+4);
 vector<int> v2(v);
 while(next_permutation(all(v2))){
    tr(v2,it)cout<<*it<<" ";
    cout<<endl;
    }
   
 cout<<endl;
 return 0;
 }   
   
    
