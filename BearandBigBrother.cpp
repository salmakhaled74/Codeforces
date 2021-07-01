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
    int a, b, y=0;
    cin >> a >> b;
    while(a <= b)
    {
        a*=3;
        b*=2;
        y++;
    }
    cout << y;
    return 0;
}
