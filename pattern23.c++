#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
                    1
                1  2  1
            1  2  3  2  1
        1  2  3  4  3  2  1
    */
    // Approach --> first print space then half triangles....

    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 1;
    while (i <= n) // space--> [ n-i ]
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--; // decrement
        }
        int j = 1;
        while (j <= i) // 1st pattern print j...
        {
            cout << j << "";
            j++;
        }
        int start = i - 1;
        while (start) // 2nd pattern print i-1 times....decrement...
        {
            cout << start << "";
            start--;
        }
        cout << endl;
        i++;
    }
    return 0;
}