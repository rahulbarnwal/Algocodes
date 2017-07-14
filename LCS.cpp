#define loop(i,n) for(int i = 0; i < n; ++i)

#include <iostream>
#include<vector>

#include<string.h>

using namespace std;

int max(int a, int b)
{
    return (a > b)? a : b;
}

//int LCS(string arr_1,int m,string arr_2,int n);
/**void LC_supersequence(const char* arr_1,int m,const char* arr_2,int n);

void LC_supersequence(string arr_1,int m,string arr_2,int n)
{
    //clearly length of longest common supersequence is m + n -lenght of longest common subsequence
    cout<< "The lenght of longest common supersequence is "<<m+n-LCS(arr_1,m,arr_2,n);
}

*/
void LCS(string arr_1,int m,string arr_2,int n)
{
    //Tabulation implemeentation..buttom up approach
    int L[m+1][n+1];
    int i,j;
    //LCS(m,n)=1+LCS(m-1,n-1)   if arr_1[m]=arr_2[n]
    //          max(LCS(m-1,n) , LCS(m,n-1)) else
    //if we define L[i][j] as length of LCS of arr_1[0,1,...i] and arr_2[0,1...j] then while calculating L[0][x] or L[x][0] we may encounter L[-1], which is not
    //in index of L[i][j]
    //so L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1]



    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                L[i][j]=0;

            else if(arr_1[i-1]==arr_2[j-1])
                L[i][j]=1+L[i-1][j-1];

            else
                L[i][j]=max(L[i-1][j],L[i][j-1]);
        }
    }


    cout<<"The length of LCS"<<L[m][n];


}

int main()
{
    string str1,str2;

    cout<<"Enter first array ";
    cin>>str1;
    cout<<"Enter second array ";
    cin>>str2;
    int m = str1.length();
    int n = str2.length();
    cout<<m<<n;
    LCS(str1,m,str2,n);
    //LC_supersequence(str1,m,str2,n);
}

