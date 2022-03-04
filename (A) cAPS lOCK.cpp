#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if (isupper(s[i])) {
            cnt++;
        }
    }
    for(int i=0; i<s.size(); i++) {
        if (cnt == s.size()) {
            s[i] += 32;
        }
        else if (islower(s[0]) && cnt == s.size() - 1) {
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            s[0] -= 32;
        }
    }
    cout << s;
    return 0;
}
