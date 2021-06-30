#include <bits/stdc++.h>
#include<string>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include <cstring>
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main(){
    init();
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ',')
            s[i] = ' ';
        int c = s[i];
        if (islower(c))
            s[i] = toupper(c);
        else if (isupper(c))
            s[i] = tolower(c);
    }
    for(int i=0; i<s.length(); i++)
        cout << s[i];
    return 0;
}
