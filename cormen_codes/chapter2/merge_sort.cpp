#include<iostream>
#include "sort.h"
#include<new>

using namespace std;


void merge(int l,int r,int mid,int* arr)
{
	//cout<<"merge called l,r,m="<<l<<r<<mid<<endl;	
	int i,j,k;
	//copying 
	int *Larray,*Rarray;
	Larray=new int[50];
	Rarray=new int[50];
	for(i=0;i<=mid-l;i++)
		Larray[i]=arr[l+i];
	for(j=0;j<=r-(mid+1);j++)
		Rarray[j]=arr[mid+1+j];
	//display_arr(mid-l+1,Larray);
	//display_arr(r-mid,Rarray);

	i=j=0;//i for larray, j for rarray;
	for(k=l;i<=(mid-l) && j<=r-(mid+1);k++)
	{
		if(Larray[i]<Rarray[j])
		{
			arr[k]=Larray[i++];
			
		}
		else
		{
			arr[k]=Rarray[j++];
		}
	}

	while(i<=mid-l)
	{
		arr[k++]=Larray[i++];
	}
	while(j<=r-(mid+1))
	{
		arr[k++]=Rarray[j++];
	}
}

void merge_sort(int l,int r,int* arr)
{

	if(l>=r)
	{	
		return ;
	}

	int mid=(l+r)/2;
	//cout<<"M="<<mid<<" Lvalue="<<l<<" rvalue"<<r<<endl;	
	
	
	merge_sort(l,mid,arr);
	merge_sort(mid+1,r,arr);
	
	merge(l,r,mid,arr);
	
	//display_arr(n,arr);
}