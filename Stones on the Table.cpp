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
    long long int n, cnt=0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0; i<n-1; i++)
    {
        if(s[i] == s[i+1])
            cnt++;
    }
    cout << cnt;
    return 0;
}
