#include<iostream> 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int lit=k*l;
    int sli=c*d;
    int ans=min({lit/nl,sli,p/np});
    cout<<ans/n<<endl;
}