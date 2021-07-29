#include <bits/stdc++.h>
#include<string>
#include<iostream>
#include<array>
#include <iomanip>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include <cstring>
using namespace std;
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{
    init();
    string s;
    int upper=0, lower=0;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            upper++;
        else if(s[i]>='a' && s[i]<='z')
            lower++;
    }
    for(int i=0; i<s.length(); i++)
    {
        if(upper > lower)
            transform(s.begin(), s.end(), s.begin(), ::toupper);
        else
            transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;
    return 0;
}
