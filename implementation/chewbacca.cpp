#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    string s;
cin >> s;

for (int i = 0; i < s.size(); i++) {
    int d = s[i] - '0';
    if (i == 0) {
        if (d >= 5 && d != 9)
            s[i] = '0' + (9 - d);
    } else {
        if (d >= 5)
            s[i] = '0' + (9 - d);
    }
}

cout << s << endl;
    return 0;
}