#include <bits/stdc++.h>
using namespace std;
int main()
{
    //    *
    //  **
    // ***
    //****
    // Approach--> 1 while loop for space decrementing...another while loop for stars.....
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
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}