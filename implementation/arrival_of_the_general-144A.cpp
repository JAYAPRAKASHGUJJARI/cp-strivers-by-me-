#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{ int n;
    cin>>n;
    vector<int> a(n);
    int maxi=0;
    int mini=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[maxi]<a[i])
        {
            maxi=i;
        }
        if(a[mini]>=a[i])
        {
            mini=i;
        }
    }
    //cout<<maxi<<" "<<mini<<endl;
    int steps=maxi+n-1-mini;

   if(maxi>mini) cout<<steps-1<<endl;
   else cout<<steps<<endl;


    return 0;
}