#include <bits/stdc++.h>
using namespace std;

void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{
    init();
    string a,b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
            if(a > b)
               cout << 1;
            else if(a < b)
               cout << -1;
            else if(a == b)
               cout << 0;
}
