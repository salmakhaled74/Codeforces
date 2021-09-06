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
    int arr[100000], n, cnt=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr[i+1])
        {
            cnt++;
        }
    }
    cout << cnt;
}
