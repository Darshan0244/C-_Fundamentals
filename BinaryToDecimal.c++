#include <iostream>
#include <cmath>
using namespace std;
// To convert Binary to decimal......
int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        i++;
        n = n / 10;
    }
    cout << ans;
}
