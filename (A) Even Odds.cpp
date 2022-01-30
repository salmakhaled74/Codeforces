#include <iostream>
using namespace std;
int main()
{
    long long int  n, k, midPoint;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        midPoint = n / 2;
        if (k > midPoint)
            cout << (k - midPoint) * 2;
        else
            cout << k * 2 - 1;
    }
    else
    {
        midPoint = (n / 2) + 1;
        if (k > midPoint)
            cout << ((k - midPoint) * 2);
        else
            cout << k * 2 - 1;
    }

}
