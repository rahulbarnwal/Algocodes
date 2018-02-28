#include<iostream>
#include<new>
#include<time.h>
#include<stdlib.h>
#include "insertion_sort.h"

using namespace std;
void take_input(int n,int* arr)
{
	int i;
	cout<<"ENTERING TAKE_INPUT\n";
	cout<<"Start entering array elements=\n";
	for(i=0;i<n;i++)
	{
		arr[i]=rand() % 10;
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




int main()
{
	int n,i;
	srand(time(NULL));
	cout<<"enter size of array";
	cin>>n;
	int  *arr1;
	arr1= new (nothrow) int[n];
	take_input(n,arr1);
	
	cout<<"value of n is="<<n<<"\n";
	display_arr(n,arr1);
	insertion_sort(arr1,n);

	
	

}