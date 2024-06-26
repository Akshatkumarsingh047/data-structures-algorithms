#include<bits/stdc++.h>
using namespace std;
long long count(int n)
{
    if(n==0)return 0;
    long long smallans=count(n/10);
    return smallans+1;
}

int main()
{
    cout<<count(9693960010);
return 0;
}