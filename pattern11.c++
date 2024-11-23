#include <iostream>
using namespace std;

int main()
{ // same as printing 1 to n. --> set a counter of char datatype...!!!!

    // A B C
    // D E F
    // G H I

    int n;
    cout << "Enter n : ";
    cin >> n;
    char count = 'A';
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }

        i++;
        cout << endl;
    }
    return 0;
}