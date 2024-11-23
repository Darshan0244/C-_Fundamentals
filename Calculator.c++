#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    // Simple Calculator....
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "Enter expression to perform : ";
    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a + b);
        break;
    case '-':
        cout << (a - b);
        break;
    case '*':
        cout << (a * b);
        break;
    case '/':
        cout << (a / b);
        break;
    case '%':
        cout << (a % b);
        break;
    default:
        cout << "Enter a valid Operation.....!!";
    }
    return 0;
}