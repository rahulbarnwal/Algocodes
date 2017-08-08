#include<iostream>

using namespace std;

//recursive approach


bool Is_subset_sum(int* S,int pos,int sum){

	//base cases
	if(sum==0)return true;
	if(pos==0 && sum!=0)return false;

	if(S[pos-1]> sum) return Is_subset_sum(S,pos-1,sum);//not conidering S[pos-1] and recursively calling other.

	return (Is_subset_sum(S,pos-1,sum)|| Is_subset_sum(S,pos-1,sum-S[pos-1]));





}

int main(){
	int n;
	int sum;
	cin>>n>>sum;

	int* set;
	set=new int[n];

	int i;
	for(i=0;i<n;i++)cin>>set[i];

	if(Is_subset_sum(set,n,sum))cout<<"There exists a subset with given sum";

	else cout<<"There is no subset with given sum";
	return 0;	
}