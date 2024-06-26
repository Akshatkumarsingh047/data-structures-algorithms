#include<bits/stdc++.h>
using namespace std;
long long fact(int n)
{
    if(n<0) return -1;
    if(n==1||n==0)
    return n;
    long long smallans=fact(n-1);
    return n*smallans;
}
int main()
{
    cout<<fact(20);
return 0;
}