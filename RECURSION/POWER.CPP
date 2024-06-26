#include<iostream>
using namespace std;
long long power(int x,int n)
{
    if(x==0) return 0;
    if(n==0) return 1;
    long long smallAns=power(x,n-1);
    return x*smallAns;

}
int main()
{
    cout<<power(2,3)<<endl;
    cout<<power(99,3);
return 0;
}