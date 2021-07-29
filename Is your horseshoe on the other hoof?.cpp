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
    int arr[4], cnt=0;
    for(int i=0; i<4; i++) cin >> arr[i];
    sort(arr, arr+4);
    for(int i=0; i<4; i++)
    {
        if(arr[i] == arr[i+1])
            cnt++;
    }
    cout << cnt++;
    return 0;
}
