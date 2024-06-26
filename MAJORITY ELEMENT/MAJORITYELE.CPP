#include<bits/stdc++.h>
using namespace std;
int majority_element(int arr[],int n)
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)/////////////O(N) T AND S;
    mp[arr[i]]++;
    for(auto x:mp)
    if(x.second>n/2)
    return x.first;

}
int majority_element2(int arr[],int n)
{
    sort(arr,arr+n);
    return arr[(0+n-1)/2];////////////////////////////NLOGN
}

int main()
{
    int arr[]={3,2,3};
    cout<<majority_element2(arr,3);
return 0;
}