#include<iostream>
#include<new>
#include<time.h>
#include<stdlib.h>
#include "sort.h"

using namespace std;
void take_input(int n,int* arr)
{
	int i;
	//cout<<"ENTERING TAKE_INPUT\n";
	//cout<<"Start entering array elements=\n";
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
	int  *arr;
	arr= new (nothrow) int[n];
	take_input(n,arr);
	
	cout<<"value of n is="<<n<<"\n";
	display_arr(n,arr);
	//insertion_sort(n,arr);
	//merge_sort(0,n-1,arr);
	bubble_sort(n,arr);
	display_arr(n,arr);
	
	

}