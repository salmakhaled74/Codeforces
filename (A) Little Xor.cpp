#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, ans=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
    }
    for(int i=0; i<n; i++){
    	int cnt=0;
    	for(int j=i; j<n; j++){
    		cnt ^= arr[j];
    		ans = max(ans, cnt);
    	}
    }
    cout << ans;
    return 0;
}
