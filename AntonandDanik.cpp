#include <bits/stdc++.h>
#include<string>
#include<iostream>
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, d = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == 'A')
            a++;
        else d++;
    if (a > d) cout << "Anton";
    if (a < d) cout << "Danik";
    if (a == d) cout << "Friendship";
    return 0;
}
