#include<iostream>
#include<vector>


using namespace std;

int rec_fib(int n){
	if(n==0)return 0;
	else if(n==1)return 1;
	else
		return rec_fib(n-1) + rec_fib(n-2);

}

int lookup_arr[100];

int mem_fib(int n){

	if(lookup_arr[n]==-1) 
	{
		if(n<=1) lookup_arr[n]=n;	
		else
			lookup_arr[n]=mem_fib(n-1) + mem_fib(n-2);
	}

	return lookup_arr[n];

}

int tab_fib(int n)
{
  int f[n+1];
  int i;
  f[0] = 0;   f[1] = 1; 
  for (i = 2; i <= n; i++)
      f[i] = f[i-1] + f[i-2];
 
  return f[n];
}
int main(){
	int n,i;
	cout<<"Enter n";
	cin>>n;
	for(i=0;i<100;i++)lookup_arr[i]=-1;	
	cout<<"The nth fib nmbr="<<mem_fib(n)<<endl;
	return 0;
}