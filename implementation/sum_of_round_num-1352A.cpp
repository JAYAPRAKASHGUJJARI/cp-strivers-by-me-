#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 void solve()
 {
    int n;
    cin>>n;
    bool first=false;
    vector<int> ans;
    int steps=0;

    while(n!=0)
    {
        int ld=n%10;
        if(n/10==0)
        {
            ans.push_back(ld*pow(10,steps));
        }
        else
        {
            if(ld!=0)
            {
                ans.push_back(ld*pow(10,steps));
            }

        }
        n=n/10;
        steps++;
    }
    cout<<ans.size()<<endl;
    for(int it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
 }
int main()
{ int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}