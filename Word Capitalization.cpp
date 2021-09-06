#include <iostream>
#include <cctype>
#include<string>
using namespace std;
int main()
{
    string s, str;
    cin >> s;
    str = s;
    str[0] = toupper(str[0]);
    cout << str;
}
