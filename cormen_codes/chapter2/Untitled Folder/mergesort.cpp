#include<iostream>
#include<new>


using namespace std;
int n;

void display_arr(int n,int* arr)
{
	int i;
	//cout<<"ENTERING DISPLAY\n";
	cout<<"The array is =";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
void merge(int l,int r,int mid,int* arr)
{
	cout<<"merge called l,r,m="<<l<<r<<mid<<endl;	
	int i,j,k;
	//copying 
	int *Larray,*Rarray;
	Larray=new int[50];
	Rarray=new int[50];
	for(i=0;i<=mid-l;i++)
		Larray[i]=arr[l+i];
	for(j=0;j<=r-(mid+1);j++)
		Rarray[j]=arr[mid+1+j];
	display_arr(mid-l+1,Larray);
	display_arr(r-mid,Rarray);

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

void copyarray(int* arr,int* newarray,int beg,int end)
{
	int i;
	for(i=0;i<=(end-beg);i++)
	{
		newarray[i]=arr[beg+i];
	}
}
void mergesort(int l,int r,int* arr)
{

	if(l>=r)
	{	
		return ;
	}

	int mid=(l+r)/2;
	cout<<"M="<<mid<<" Lvalue="<<l<<" rvalue"<<r<<endl;	
	
	//copy array part
	mergesort(l,mid,arr);
	mergesort(mid+1,r,arr);
	
	merge(l,r,mid,arr);
	//free(Larray);
	//free(Rarray);
	display_arr(n,arr);
}

void take_input(int n,int* arr)
{
	int i;
	//cout<<"ENTERING TAKE_INPUT\n";
	cout<<"Start entering array elements=\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
}


int main()
{
	int i;
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
		mergesort(0,n-1,arr);
		display_arr(n,arr);

	}
	

}