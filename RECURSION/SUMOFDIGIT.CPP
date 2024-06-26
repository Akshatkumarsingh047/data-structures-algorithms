#include<iostream>
using namespace std;
long long sum_of_digits(int n)
{
    if(n==0) return 0;
    int smallAns=sum_of_digits(n/10);
    return n%10+smallAns;
}
int main()
{
    cout<<sum_of_digits(123);
return 0;
}