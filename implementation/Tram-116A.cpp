#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int curr=0;
    int maxi=INT_MIN;
    while(n--)
    {
        int a,b;
        cin>>b>>a;
        curr+=a-b;
        maxi=max(curr,maxi);
    }
    cout<<maxi<<endl;
    
    return 0;
}