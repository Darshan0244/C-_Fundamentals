#include <iostream>
using namespace std;

int main()
{
    //  1
    //  2  1
    //  3  2  1
    //  4  3  2  1

    // Formula is [ i-j+1 ]
    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1 << " ";
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}