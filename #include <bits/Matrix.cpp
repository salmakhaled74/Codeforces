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
    int arr[n][n];
    for(int i=0; i<n ; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sump=0, sums=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
                sump += arr[i][j];
            if ((i + j) == (n - 1))
                sums += arr[i][j];
        }
    }
    cout << abs(sump - sums);
    return 0;
}
