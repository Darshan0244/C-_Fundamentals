#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter n : ";
    cin >> n;
    int  i = 2;
    while(i < n){

        
        if(n%i==0){
        cout<<"Not a prime no ..";
        }
        else {
        cout<<"It is a Prime no..";
        }
        
        break;
        i++;
    }

    return 0;
}