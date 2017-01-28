#include<iostream>
#include<vector>
#include<algorithm>
#define all(c) c.begin(),c.end()

using namespace std;


int main(){
    int n;
    cin >> n;

    
    vector<int> a(n);
    int sum=0;
    for(int a_i = 0;a_i < n;a_i++)
      {
        cin >> a[a_i];
        sum+=a[a_i];
      }
    if(n==1)cout<<2;
    if(n==2){
      if(a[0]==a[1])cout<<2;
      else cout<<1;
    }  
    int max=*max_element(all(a));
    
    if(sum-max<=max)cout<<1;
    else
     cout<<0;
    
       
    
    return 0;
}

