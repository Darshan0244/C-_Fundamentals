#include <bits/stdc++.h>
using namespace std;
// To Convert Decimal to Binary......
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;// Prints reverse integer....
        n = n >> 1;// Right shift 1 .... i.e divide by 2....
        i++;
    }
    cout << ans;
}
