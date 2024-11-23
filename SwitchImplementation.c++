#include <iostream>
using namespace std;
int main()
{
    // Switch Case Implementation..!!!!!
    int num = 1;
    while (1)
    {
        switch (2 * num)
        {
        case 2:
            cout << "Hello world..." << endl;
            cout << "How r u doing" << endl;
            break;
        case 1:
            cout << "Hello Duniya" << endl;
            cout << "Why r u doing" << endl;
            break;

        default:
            cout << "Hi darshan..";
        }
        exit(0);
    }
    return 0;
}