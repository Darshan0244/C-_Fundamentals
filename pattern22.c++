#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for space [ i-1 ]---> for numbers [  ---> print counter from  .... ]
    /*
           1 2 3 4
           - 2 3 4
           - - 3 4
           - - - 4
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
        int a = i;
        while (j <= n - i + 1)
        {
            cout << a;
            a++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}