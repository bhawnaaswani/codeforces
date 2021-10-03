#include <bits/stdc++.h>
using namespace std;
 
void Odd_Occurence(int arr[],int n)
{
    unordered_map <int,int> m;
    for(int i=0; i<n; i++)
        m[arr[i]]++;
    for(auto i : m)
    {
        if(i.second%2 != 0)
            cout<<i.first<<" ";
    }
}
int main(){
    int arr[] = {4, 4, 100, 5000, 4, 4, 4, 4, 100, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    Odd_Occurence(arr,n);
    
}