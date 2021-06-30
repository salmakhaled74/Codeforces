#include <bits/stdc++.h>
#include<string>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main(){
    init();
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
       cin >> arr2[i];
    }
    sort(arr, arr+n);
    sort(arr2, arr2+n);
    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr2[i])
            {
               cout << "no";
                return 0;
            }
    }
     cout << "yes";
    return 0;
}
