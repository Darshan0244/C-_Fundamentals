#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
A B C
B C D
C D E
    */
    // Simple answer for one of the previous question...
    // Practice this question again.....
    // Approach --> 'A'+i-1 ...initialize in column while loop...And increment...
    int n;
    cout << "Enter n : ";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= n)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}