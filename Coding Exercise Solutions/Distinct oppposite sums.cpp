
//https://www.codechef.com/problems/DISTOPPSUMS

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for(int i=1; i<=n/2; i++){
            cout<< i<<" ";
        

        }
        for (int i=n; i>n/2;i--){
            cout<<i<<" ";
        }
        cout << endl;
    }
}
