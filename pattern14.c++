#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Practice this question again.....
    // Approach --> 'A'+n-i ...initialize in column while loop...And increment...
    // D
    // C  D
    // B  C  D
    // A  B  C  D
    int n;
    cout << "Enter n : ";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
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