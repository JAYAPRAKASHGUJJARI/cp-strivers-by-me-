#include<iostream>
using namespace std;
int main()
{ string s;
    cin>>s;
    string ans="";
    for(int i=0;i<s.size();i++)
    {
       if(s[i]=='y'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
       {
        continue;
       } else
       {
         
            
            if(s[i]>=65&&s[i]<65+26)
            { ans.push_back('.');
                ans.push_back(s[i]+32);
            }
            else 
            { ans.push_back('.');
                ans.push_back(s[i]);
            }
         
       }
    }
    cout<<ans<<endl;
    return 0;
}