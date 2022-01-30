#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n, j=0, sum=0;
    cin >> n;
    long long int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    sort(arr, arr+n);
    if(sum % 2 == 0){
        cout << sum;
    }else {
        while(sum % 2 != 0)
        {
            if(arr[j] % 2 != 0)
                sum-=arr[j];
            j++;
        }
        cout << sum;
    }
    return 0;
}
