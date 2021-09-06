#include <bits/stdc++.h>
#include<string>

using namespace std;

void init() {
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main() {
    init();
    long long int n, q;
    cin >> n >> q;
    long long int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long int prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = arr[i] + prefixSum[i - 1];
    }
    int l, r;
    for (int i = 0; i < q; i++) {

        cin >> l >> r;
        if (l != 1)
            cout << prefixSum[r - 1] - prefixSum[l - 1 - 1] << endl;
        else
            cout << prefixSum[r - 1] << endl;

    }
}
