#include<iostream>
#include<new>
#include<time.h>
#include<stdlib.h>

using namespace std;

void insertionsort(int n,int* arr)

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


}

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
	int  *arr;
	arr= new (nothrow) int[n];
	if(arr==NULL)cout<<"error:no memeory alocated";
	else
	{
		take_input(n,arr);
		cout<<"value of n is="<<n<<"\n";
		display_arr(n,arr);
		insertionsort(n,arr);
		display_arr(n,arr);

	}
	

}	