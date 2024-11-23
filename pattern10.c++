#include <iostream>
using namespace std;

int main()
{
    //  A B C D
    //  A B C D
    //  A B C D
    // A B C D

    int n;
    cout << "Enter n : ";
    cin >> n;
    // Approach - - - > Set start as char = 'A' ---> increment A+j-1;
    // remember put A+j-1 in char data type;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + j - 1;

            cout << ch << " ";
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}