#include <bits/stdc++.h>
using namespace std;
int main(){
    string str ;
    cin >> str;
    int one = 0 , zero = 0 ;
    bool ch = false ;

    for(int i=0; i<str.size(); i++){
        if(str[i]=='1'){
            one++;
            zero=0;
        } else{
            zero++;
            one = 0 ;
        }
        if(one == 7 || zero == 7){
            ch = true ;
            break;
        }
    }
    if(ch){
        cout <<"YES\n";
    } else{
        cout << "NO\n" ;
    }
    return 0;
}
