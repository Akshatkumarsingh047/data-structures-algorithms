#include<iostream>
using namespace std;
long long count_zeroes(long long n)
{
    if(n==0) return 0;
    long long smallAns=count_zeroes(n/10);
    long long lastDigit=n%10;
    if(lastDigit==0)
    return smallAns+1;
    else return smallAns;
}
int main()
{
    cout<<count_zeroes(1009000);
return 0;
}