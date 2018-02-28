#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
    }

void permute(char* s,int l,int r){
  if(l==r){cout<<s;cout<<endl;}
  
  else{
    int i;
    vector<int> v(256,0);
    for(i=l;i<=r;i++)
     {
     
        if(v[(int)(*(s+i))]!=1){ swap((s+l),(s+i));
         permute(s,l+1,r);
         swap((s+l),(s+i));
         v[(int)(*(s+i))]=1;
         }
        }
     }
}   

int main(){
 int t;
 cin>>t;
 int i,n;
 
 char s[10];
 for(i=0;i<t;i++){
   cin>>s;
   n=strlen(s);
   cout<<"permuttatons r"<<endl;
   permute(s,0,n-1);
   }
 return 0;
 }  

/**
http://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
(WHEN ELEMENTS ARE DISTINCT)................
.............................................
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
    }

void permute(char* s,int l,int r){
  if(l==r)cout<<s;
  else{
    int i;
    for(i=l;i<=r;i++){
      swap((s+l),(s+i));
      permute(s,l+1,r);
      swap((s+l),(s+i));
       }
   }
}   

int main(){
 int t;
 cin>>t;
 int i,n;
 char s[10];
 for(i=0;i<t;i++){
   cin>>s;
   n=strlen(s);
   permute(s,0,n-1);
   }
 return 0;
 }  
 .............................
 */
   
