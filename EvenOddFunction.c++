#include <bits/stdc++.h>
using namespace std;
bool isEven(int num)
{
    if (num & 1)
    { // Odd
        return 0;
    }
    return 1; // Even
}
int main()
{
    int num;
    cout << "Enter num :";
    cin >> num;

    if (isEven(num))
    {
        cout << "Number is Even...";
    }
    else
    {
        cout << "Number is Odd...";
    }
    return 0;
}