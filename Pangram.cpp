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
    int n, hash[123]={0};
    cin >> n;
    string s, result="";
    cin >> s;
    bool pangram = false;
    if(n >= 26)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    for(int i=0; i<s.length(); i++)
    {
        if(hash[s[i]] == 0)
        {
            hash[s[i]]=1;
            result += s[i];
        }
    }
        for(int i=0; i<n; i++)
        {
            if(result[i] != result[i+1] && result.length() == 26)
            {
                pangram = true;
                break;
            }
            else
                pangram = false;
        }
    }
    if(pangram == true)
        cout << "YES";
    else if(pangram == false)
        cout << "NO";
}
