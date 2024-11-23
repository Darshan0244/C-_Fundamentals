#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for space [ n-i ]---> for numbers [ j<=i ---> print counter from  1-n.... ]
    /*
              - - - 1
              - - 2 3
              - 4 5 6
            7 8 9 10
     */
    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 1;
    int start = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << start;
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}