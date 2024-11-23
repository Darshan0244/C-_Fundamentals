#include <bits/stdc++.h>
using namespace std;
int main()
{
    // A B C
    // B C D
    // D E F
    // Approach --> i+j-1 = 1 --> adding 'A'-1 both sides -->[ 'A'+i+j-2 ]
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch = 'A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}