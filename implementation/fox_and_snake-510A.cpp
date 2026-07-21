#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    bool eve=true;
    bool oddeve=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(eve)
            {
                cout<<"#";
            }
            else {
                if(oddeve)
                {
                    if(j==m-1) cout<<"#";
                    else cout<<".";
                } 
                else{
                    if(j==0) cout<<"#";
                    else cout<<".";
                }
                
            }
        }
        cout<<endl;
         if(eve==false)
         {
            oddeve=!oddeve;
         }
        eve=!eve;
    }
    return 0;
}