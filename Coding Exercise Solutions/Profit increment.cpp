
//https://www.codechef.com/problems/PROINC

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y; 
        int c=x-y;
        int d = (x*10)/100;
        int r=d + x;
        int p= r-c;

        cout<<p<<endl;
    }
        return 0;
}
