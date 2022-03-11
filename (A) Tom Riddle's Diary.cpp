#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, i, j;
    string s[105];
    cin >> n;
    for(int i=0; i<n; i++){
    	cin >> s[i]; 
    }
    for(i=0; i<n; i++){
    	for(j=0; j<i; j++){
    		if(s[i] == s[j]){
    			break;
    		}
    	}
    	if(j == i){
    		cout << "NO" << endl;
    	}
    	else{
    		cout << "YES" << endl;
    	}
    }
    return 0;
}
