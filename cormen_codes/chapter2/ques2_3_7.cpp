#include<iostream>
#include<new>

#include "sort.h"


using namespace std;

void take_input(int n,int* arr)
{
	int i;
	//cout<<"ENTERING TAKE_INPUT\n";
	//cout<<"Start entering array elements=\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
}

void display_arr(int n,int* arr)
{
	int i;
	cout<<"ENTERING DISPLAY\n";
	cout<<"The array is =";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

void checksum(int* arr,int n,int x)
{
	int i,j;
	i=0;j=n-1;
	while(i<=j)
	{
		if(arr[i]+arr[j]==x)
		{
			cout<<"Sum exists";return;
		}
		else if(arr[i]+arr[j]>x)
		{
			j--;
		}
	
		else i++;
	}

	cout<<"Sum doesn't exist";

}


int main()
{
	int x,n;
	cout<<"enter size of array";
	cin>>n;
	int  *arr;
	arr= new (nothrow) int[n];
	take_input(n,arr);
	
	cout<<"value of n is="<<n<<"\n";
	display_arr(n,arr);

	cout<<"enter x=";
	cin>>x;
	merge_sort(0,n-1,arr);
	checksum(arr,n,x);

}