#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// Switch Case H.W ---> Given amount 1330Rs....
//  Find how much 100Rs , 50Rs , 20Rs , 1Rs note needed.......
//  using basic maths and switch case.....
int main()
{
    int amt;
    cout << "Enter amount: ";
    cin >> amt;
    int note = 0;

    switch (int num = 1)
    {
    case 1:
        note = amt / 100;                                 // Gives no. of notes
        amt = amt % 100;                                  // Gives no of notes left...(amount left)
        cout << note << " 100Rs note required.." << endl; // printing no. of notes required...

    case 2:
        note = amt / 50;
        amt = amt % 50;
        cout << note << " 50Rs note required.." << endl;

    case 3:
        note = amt / 20;
        amt = amt % 20;
        cout << note << " 20Rs note required.." << endl;

    case 4:
        note = amt / 1;
        amt = amt % 1;
        cout << note << " 1Rs note required.." << endl;
    }
}