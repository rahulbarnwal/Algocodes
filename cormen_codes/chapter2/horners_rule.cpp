#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

void take_input(int n,float* arr)
{
	int i;
	//cout<<"ENTERING TAKE_INPUT\n";
	//cout<<"Start entering array elements=\n";
	for(i=0;i<n;i++)
	{
		arr[i]=rand() % 15;
	}
	
}

float findvalue(float* coeff,int n,float x)
{
	int i=n-2;
	float sum=coeff[n-1];

	while(i>=0)
	{
		sum=sum*x+coeff[i--];
	}
	return sum;
}

void display_arr(int n,float* arr)
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
	int n;
	cout<<"enter degree of polynomial";
	cin>>n;
	float* coeff;
	coeff=new float[n+1];
	srand(time(NULL));

	take_input(n+1,coeff);
	display_arr(n+1,coeff);

	float x;
	cout<<"enter value of x";
	cin>>x;

	float sum=	findvalue(coeff,n,x);
	cout<<"the final result is ="<<sum;
}
