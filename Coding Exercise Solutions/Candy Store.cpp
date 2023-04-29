
//https://www.codechef.com/problems/CANDYSTORE

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        string s;
        cin >> a >> b;
        int c=0;
        if(b<=a){
            cout << b << endl;
        }
        else{
            int d=b-a;
            int v= d*2;
            cout << v+a << endl;
        }
    }
    return 0;
}
