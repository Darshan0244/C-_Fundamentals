#include <iostream>
using namespace std;
int main()
{
    // Done this problem by own.....(break problem into 3 parts..)
    /*
       1234554321
       1234**4321
       123****321
       12******21
       1********1
    */
    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1; // 1st triangle [ n-i+1 ] times........
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        int star = 1; // to print star [ i-1*2 ] (2nd triangle)
        while (star <= (i - 1) * 2)
        {
            cout << "*";
            star++;
        }
        int a = n - i + 1; // to print 3rd triangle [ n-i+1] --> decrement a ....
        while (a)
        {
            cout << a;
            a--;
        }
        cout << endl;
        i++;
    }
    return 0;
}