#include<iostream>
#include "sort.h"

using namespace std;


void insertion_sort(int n,int* arr)

{
	cout<<"ENTERING SORTING\n";
	int key_index,j,pos,temp;
	
	for(key_index=1;key_index<n;key_index++)
	{
		j=key_index-1;
		while(arr[j]>arr[key_index] && j>=0)//often misses j>=0
		{
			j--;
		}
		pos=j+1;

		temp=arr[key_index];
		for(j=key_index-1;j>=pos;j--)
		{
			arr[j+1]=arr[j];
		}

		arr[pos]=temp;

	}
	return;

}