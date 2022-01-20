#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k = n;
    while(true){
        k++;
        int a = k / 1000;
        int b = k / 100 % 10;
        int c = k / 10 % 10;
        int d = k % 10;
        if(a != b && b != c && c != d &&
        a != c && a != d && b != d && c != b){
            break;
        }
    }
    cout << k;
    return 0;
}
