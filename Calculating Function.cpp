#include <bits/stdc++.h>
#include<string>
#include<iostream>
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
    long long int sum=0;
    long long int n;
    cin >> n;
    for(int i=0; i<n; i++)  sum+=i;
    if (n % 2 == 0)cout << sum-(sum-(n/2));
    else
        cout << (sum -(sum+(n/2+1)));
    return 0;
}
