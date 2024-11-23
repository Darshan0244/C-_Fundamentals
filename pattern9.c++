#include <iostream>
using namespace std;

int main()
{
    //  A A A A
    //  B B B B
    //  C C C C
    //  D D D D

    int n;
    cout << "Enter n : ";
    cin >> n;
    // Approach - - - > Set start as char = 'A' ---> increment A+i-1; 
    // remember put A+i-1 in char data type;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch ='A'+i-1;
        
            cout << ch<< " ";
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}