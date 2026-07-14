#include<iostream>
using namespace std;
int main()
{
    int n;
 cin>>n;
 int x=0;
    while(n--)
    { 
        
        string s;
        for(int i=0;i<3;i++)
        {
            char ch;
            cin>>ch;
            s.push_back(ch);
        }
        string f=s.substr(0,2);
        string l=s.substr(1,2);
        if(f=="++"||l=="++")
        {
            x++;
        } 
        else if(f=="--"||l=="--")
        {
            x--;
        }
        
    }
    cout<<x<<endl;
}