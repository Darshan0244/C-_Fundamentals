#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
     ****
     ***
     **
     *
     */
    // Approach--> n-i+1....
    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= n - i + 1)
        {
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
    return 0;
}