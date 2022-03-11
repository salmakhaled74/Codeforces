#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x, cnt=0;
    cin >> x;
    int a=1, b=2, c=3, d=4, e=5;
    while(x != 0){
       if(x >= e){
         	x-=e;
         	cnt++;
      }else if(x >= d){
        	x-=d;
        	cnt++;
      }else if(x >= c){
        	x-=c;
        	cnt++;
      }else if(x >= b){
        	x-= b;
        	cnt++;
      }else{
        	x-=a;
        	cnt++;
       }
    }
    cout << cnt;
    return 0;
}
