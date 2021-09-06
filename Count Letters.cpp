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
    string s;
    cin >> s;
    map <char, int > m;
    map <char, int > ::iterator itr;
    for(long i= 0; i< s.length(); i++){
        m[s[i]]++;
    }
    for(itr = m.begin(); itr!= m.end(); itr++){
        cout << itr-> first <<" : " << itr-> second << endl;
    }
    return 0;
}
