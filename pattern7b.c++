#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// 2nd mtd to solve this problem ( Made by myself ).....formula ( i + j -1)
int main()
{
    //  1
    //  2  3
    //  3  4  5
    //  4  5  6  7

    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i + j - 1 << " ";
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}