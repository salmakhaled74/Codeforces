#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x;
    cin >> n >> m;
    int freq[m+1] = {};
    for(int i=0; i<n; i++)
    {
        cin >> x;
        freq[x]++;
    }
    for(int i=1; i<=m; i++)
    {
        cout << freq[i] << endl;
    }
}
