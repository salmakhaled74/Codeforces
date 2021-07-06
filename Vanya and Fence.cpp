#include <bits/stdc++.h>
#include<string>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include <cstring>
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main()
{
    init();
    int f, h, hf,cnt=0;
    cin >> f >> h;
    for(int i=1; i<=f; i++)
    {
        cin >> hf;
        if(hf > h)
            cnt+=2;;
        if(hf <= h)
            cnt++;
    }
    cout << cnt;
    return 0;
}
