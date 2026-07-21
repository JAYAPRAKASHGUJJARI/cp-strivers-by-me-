#include<iostream> 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
   int maxi=max({x1,x2,x3});
   int ans=INT_MAX;
   for(int i=1;i<=maxi;i++)
   {
      ans=min(ans,abs(i-x1)+abs(i-x2)+abs(i-x3));
   }
   cout<<ans<<endl;
    return 0;
}