#include <bits/stdc++.h>
using namespace std;
 // Find a triplet that sum to a given value
// Time Complexity ---> O(N^2)

bool Triplets(int arr[],int n,int sum)
{
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
       int f = i+1;
       int b = n-1;
       while(b>f)
       {
        if(arr[f]+arr[b]+arr[i]==sum)
            {
                cout<<arr[f]<<" , "<<arr[b]<<" , "<<arr[i]<<endl;
                return true;
            }
        else if(arr[f]+arr[b]+arr[i]>sum)
            b--;
        else
            f++;
       }
    }
    return false;
}
int main(){
    int arr[] = {1, 4, 45, 6, 10, 8};
    int target = 22;
    int n = sizeof(arr)/sizeof(arr[0]);
    Triplets(arr,n,target);
    
}