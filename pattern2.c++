#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    int  n;
    cout<<"Enter n : ";
    cin>>n;

    int i = 1;
    while(i<=n){
        int j =1;
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}