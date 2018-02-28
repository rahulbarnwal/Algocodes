#include<iostream>
#include "sort.h"

using namespace std;

void bubble_sort(int n,int* arr)
{
	cout<<"BUBBLESORT CALLED"<<endl;
	int i,j;

	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(arr[j]<arr[j-1])
				swap(arr[j],arr[j-1]);
		}
	}
}