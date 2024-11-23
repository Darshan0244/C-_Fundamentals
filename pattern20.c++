#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for space [ n - i ]---> for numbers [ j <= i ---> print i .. ]
    /*
              1
          2 2
        3 3 3
      4 4 4 4
     */
    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 1;
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
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}