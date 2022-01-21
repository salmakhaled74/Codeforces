#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int police=0, crime=0;
    int arr[100005];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i] != -1){
            police+=arr[i];
        }
        else if(police > 0){
            police--;
        }else{
            crime++;
        }
    }
    cout << crime;
    return 0;
}
