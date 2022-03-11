#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int money, cnt=0;
    cin >> money;
    int a1=1, a2=5, a3=10, a4=20,a5=100;
    while(money != 0){
        if(money >= a5){
            money -= a5;
            cnt++;
        }else if(money >= a4){
            money -= a4;
            cnt++;
        }else if(money >= a3){
            money -= a3;
            cnt++;
        }else if(money >= a2){
            money -= a2;
            cnt++;
        }else{
            money -= a1;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
