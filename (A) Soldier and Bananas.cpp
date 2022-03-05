#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cost, bananas;
    long long int money;
    cin >> cost >> money >> bananas;
    int sum =0;
    for(int i=1; i<=bananas; i++){
        sum += cost * i;
    }
    if(money >= sum){
        cout << 0;
    }else{
        cout << sum - money;
    }
    return 0;
}
