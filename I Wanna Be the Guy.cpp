#include <bits/stdc++.h>
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main(){
    init();
    int n, p, q, cnt=0;
    cin >> n;
    int arr[205];
    cin >> p;
    for(int i=0; i<p; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    for(int i=p; i<p+q; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+(p+q));

    for(int i=0; i<p+q; i++)
    {
        if(arr[i] != arr[i+1])
        {
            cnt++;
        }
    }
    if(n == cnt)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}
