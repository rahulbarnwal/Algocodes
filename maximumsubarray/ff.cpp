#include<iostream>
#include<vector>
#define all(c) c.begin(),c.end()
#define tr(c,it) for(typeof(c.begin()) it=c.begin();c!=c.end();it++)
using namespace std;

int main(){

	int n,i,j;
	cin>>n;
	vector<int> a(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}

    //KADANE ALGORITHM
    int max_so_far=a[0];
    int max_ending_here=a[0];
    for(i=1;i<n;i++){
    	max_ending_here+=a[i];
    	if(max_ending_here<a[i])max_ending_here=a[i];
    	if(max_ending_here>max_so_far)max_so_far=max_ending_here;
    }
    cout<<"max contagious sum based on kadane algo="<<max_so_far<<endl;

	//BRUTE FORCE TECHNIQUE
	// CLEARLY BRUTE FORCE TECHNIQUE SUGGESTS THAT THERE ARE OVERLAPING SUBPROBLEMS
	int max_sum=a[0];
	int sum;

	for(i=0;i<n;i++){
		sum=0;
		for(j=i;j<n;j++){
			sum=sum+a[j];
			if(max_sum<sum)max_sum=sum;
		}
	}

	cout<<"\n maximum contagious sum based on bruteforce technique="<<max_sum;
	return 0;
}
	


/*
Kadane's algorithm consists of a scan through the array values, computing at each position the maximum (positive sum) subarray ending
 at that position. This subarray is either empty (in which case its sum is zero) or consists of one more element than the maximum subarray
  ending at the previous position. The algorithm only needs to keep track of the ending position because the implied starting position is just
   after the last position at which the sum went negative; a higher sum can always be found by dropping any negative-sum prefix. Thus, the 
   problem can be solved with the following code, expressed here in Python:
def max_subarray(A):
    max_ending_here = max_so_far = 
    for x in A:
        max_ending_here = max(0, max_ending_here + x)
        max_so_far = max(max_so_far, max_ending_here)
    return max_so_far
A variation of the problem that does not allow zero-length subarrays to be returned, in the case that the entire array consists of negative numbers, can be solved with the following code:
def max_subarray(A):
    max_ending_here = max_so_far = A[0]
    for x in A[1:]:
        max_ending_here = max(x, max_ending_here + x)
        max_so_far = max(max_so_far, max_ending_here)
    return max_so_far
The algorithm can also be easily modified to keep track of the starting and ending indices of the maximum subarray.
Because of the way this algorithm uses optimal substructures (the maximum subarray ending at each position is calculated in a simple way from a related but smaller and overlapping subproblem: the maximum subarray ending at the previous position) this algorithm can be viewed as a simple example of dynamic programming.
The runtime complexity of Kadane's algorithm is {\displaystyle O(n)} O(n).
*/
