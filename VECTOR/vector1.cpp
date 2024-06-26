#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
     v.push_back(2);
      v.push_back(3);
       v.push_back(4);
       v.push_back(5);
       v[4]=10000002;
       v[5]=199999;
       v[6]=910101;
       for(auto x:v)
       cout<<x;

}