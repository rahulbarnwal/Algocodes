#define loop(i,n) for(int i = 0; i < n; ++i)

#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;



int length_LIS(vector<int> arr,int n)
{
     vector<int> len_LIS_index(n,1);
     ////
     //vector<vector<int>> LISvector(n);
     //LISvector[0].push_back(arr[0]);
    /////
    //Tablulation
    //this stores length of LIS ending at index i of array ie it includes arr[i]
    int i,j;
    for(i=1;i<n;i++)
    {
        cout<<"i="<<i<<endl;
        for(j=0;j<n;j++)
        {
            cout<<len_LIS_index[j];
        }
        for(j=0;j<i;j++)
        {
            if(arr[j]<arr[i])
                if(len_LIS_index[i]< 1 + len_LIS_index[j])
                    {
                        len_LIS_index[i]=len_LIS_index[j]+1;
                        //maxindex=j;
                    }
        }

        cout<<endl;
    }

    for(i=0;i<n;i++)
    {
        cout<<len_LIS_index[i];
    }
    return *max_element(len_LIS_index.begin(),len_LIS_index.end());

    return 0;
}

int main()
{
    int n;
    cout<<"Enter size of array";
    cin>>n;
    vector<int> arr(n);
    loop(i,n)
    {
        cin>>arr[i];
    }
    cout<<"lenght of longest LIS="<<length_LIS(arr,n);

}
