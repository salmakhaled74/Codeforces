#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, x;
    cin >> a >> b >> x;
    long long int result = ceil((double)a / x) * ceil((double)b / x);
    cout << result;

}
