#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{ //cout<<(int)'A'<<endl;
    ll k,n,w;
    cin>>k>>n>>w;
    ll total;
    if(w%2==0) total=w/2 *(w+1)*k;
    else  total=(w+1)/2 *w *k;
    ll ans=max((ll)0,(ll)total-n);
    cout<<ans<<endl;
    return 0;
}