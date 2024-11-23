#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1
    int  n;
    cout<<"Enter n : ";
    cin>>n;

    int i =1;
    while(i<=n){
        int j = 1;
        while(j<=n){
             // storing n-j+1 in variable a....
                cout<<n-j+1<<" "; // n-j+1 gives reverse number of j ....
                j++;
        }
        i++;
        cout<<endl;
    }
    
    return 0;
}