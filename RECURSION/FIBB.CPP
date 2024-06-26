#include<bits/stdc++.h>
using namespace std;

int nthfib(int n)
{
    if(n<0) return -1;
    if(n==0||n==1) return n;
    int smallans1=nthfib(n-1);
    int smallans2=nthfib(n-2);
    return smallans1+  smallans2;

}
int nthfib2(int n)
{
   int dp[n+1];
 dp[0]=0;dp[1]=1;
 for(int i=2;i<=n;i++)
 dp[i]=dp[i-1]+dp[i-2];
 return dp[n];


}
int nthfib3(int n,int dpp[])
{
    if(n==0||n==1) return n;
    if(dpp[n]!=0) return dpp[n];
    int output=nthfib3(n-1,dpp)+nthfib3(n-2,dpp);
    dpp[n]=output;
    return output;

}
int main()
{
    
    int n;
    cin>>n;
    int dpp[n+1]={0};
   
    cout<<nthfib2(n)<<endl;
    cout<<nthfib3(n,dpp)<<endl;
     cout<<nthfib(n)<<endl;
return 0;
}