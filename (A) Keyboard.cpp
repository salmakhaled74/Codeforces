#include <bits/stdc++.h>
using namespace std;
int main(){
    string str = "qwertyuiopasdfghjkl;zxcvbnm,./" ;
    char ch ;
    cin >> ch ;
    string str1 ;
    cin >> str1 ;
    for(int i=0 ; i<str1.size(); i++){
        if(ch == 'R'){
            for(int j=0 ; j<str.size() ; j++){
                if(str1[i] == str[j]){
                    cout << str[j-1] ;
                }
            }
        }
        else if(ch=='L'){
            for(int j=0 ; j<str.size() ; j++){
                if(str1[i] == str[j]){
                    cout << str[j+1] ;
                }
            }
        }
    }

}
