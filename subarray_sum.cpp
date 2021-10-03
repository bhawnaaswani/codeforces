#include <bits/stdc++.h>
using namespace std;
void subarray_sum(int arr[],int n,int sum)
{
	int curr_sum=arr[0];
	int start = 0;
	for(int i=1;i<=n;i++)
	{
		while(sum<curr_sum && start<i-1)
		{ 
            curr_sum = curr_sum - arr[start]; 
            start++; 
        } 
		if(sum==curr_sum)
		{
			cout<<"Required sum is found between "<<start<<" and "<<i-1;
			return;
		}
		if(curr_sum<sum)
			curr_sum+=arr[i];
	}
	cout<<"No such subarray found !";
	return;
}
int main(){
	int a[] = {15, 2, 4, 8, 9, 5, 10, 23 };
	int n = sizeof(a)/sizeof(a[0]);
	subarray_sum(a,n,26);
}