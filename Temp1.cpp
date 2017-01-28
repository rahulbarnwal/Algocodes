#include<iostream>
#include<vector>
#include<math.h>
#include<utility>

//Find minimum number to be divided to make a number a perfect square
using namespace std;
//This function produces a list of pairs whose first lemnt consist of prime factors and corresponding power in 2nd elmnt pos

int isPrime(int m){

	if(m==1)return 0;
	if(m==2)return 1;
	if(m%2==0)return 0;
	int i;

	for(i=3;i<sqrt(m);i=i+2){
		if(m%i==0)return 0;
	}
	 return 1;

}
void primefact(int n){

	int reqno=1;
	int i;
	vector<pair<int,int> > p;
	int count=0;
	while(n%2==0){n=n/2; count++;}
	p.push_back(make_pair(2,count) );

	if(count%2!=0)reqno*=2;

	for(i=3;i<=n;i+=2){
		count=0;
		if(isPrime(i) && n%i==0){
			while(n%i==0){n=n/i; count++; }

			if(count%2!=0)reqno*=i;
			p.push_back(make_pair(i,count));

		}
		
		
	}

	cout<<"Te required output="<<reqno<<endl;
	for(i=0;i<p.size();i++)cout<<p[i].first<<" "<<p[i].second<< ";";



}

int main(){

	int n;
	cin>>n;
	
	primefact(n);
	return 0;
}