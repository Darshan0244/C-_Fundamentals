#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    // Check the no is prime or not...
    int n;
    bool isPrime = 1;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime=0;
            break;
            // cout << "Not a Prime no..";
        }      
    }
    if(isPrime==0)
        cout<<"Not a prime no..";
    else
        cout<<"Prime no..";
    return 0;
}