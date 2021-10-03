#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[],int size)
{
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void pushZerosToEnd(int arr[],int n)
{
	int l=0;int r=n-1;
	while(r>l){
		while(r>l && arr[l]!=0)
			l++;
		while(r>l && arr[r]==0)
			r--;
		if(r>l)
		{
			swap(arr[l],arr[r]);
			l++;
			r--;
		}
	}
}
int main(){

	int a[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
	int n = sizeof(a)/sizeof(a[0]);
	printarr(a,n);
	pushZerosToEnd(a,n);
	printarr(a,n);
	return 0;
}