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
    int n, p, v, t, cnt=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> p >> v >> t;
        cnt += (p + v + t >= 2);
    }
     cout << cnt;
    return 0;
}
