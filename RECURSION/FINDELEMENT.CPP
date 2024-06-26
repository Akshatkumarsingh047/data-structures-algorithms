#include<iostream>
using namespace std;
bool isPresent(int arr[],int n,int x)
{
    if(n==0)return 0;
    if(arr[0]==x)return 1;
    return isPresent(arr+1,n-1,x);

}
bool isPresent2(int arr[],int n,int x)

{
    if(n==0) return false;
    bool smallArr=isPresent2(arr+1,n-1,x);
    if(smallArr)return true;
    if(arr[0]==x)
    return true;
    else return false;
}
bool isPresent3(int arr[],int n,int x)
{
    if(n==0) return false;
    if(arr[n-1]==x) return true;
    return isPresent3(arr,n-1,x);
}
int isPresent5(int arr[],int n,int x,int i)
{
    if(i==n) return -1;
    if(arr[i]==x)retu rn i;
    return isPresent5(arr,n,x,i+1);


}
int main()
{
    int arr[]{1,2,3,4,5,6,9,8,9,10};
    cout<<isPresent5(arr,10,9,0);
   
    
return 0;
}