#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for space [ i-1 ]---> for numbers [ n-i+1 ]
    /*
     1 1 1 1
        2 2 2
          3 3
            4
     */
    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = 1;
        while (space <= i - 1)
        {
            cout << " ";
            space++;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}