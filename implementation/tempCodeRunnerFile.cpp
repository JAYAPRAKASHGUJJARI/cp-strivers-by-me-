#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool hard=true;
    for(int i=0;i<n;i++)
    {
        int op;
        cin>>op;
        if(op==1) 
        {
            hard=true;
            break;}
    }
    if(hard) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
}