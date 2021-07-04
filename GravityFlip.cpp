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
    int arr[101];
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
