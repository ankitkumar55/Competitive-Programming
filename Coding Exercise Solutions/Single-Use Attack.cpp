//https://www.codechef.com/problems/SINGLEUSE

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int n=0, m=1;
        n=c;

        while(n<a){
            n=n+b;
            m=m+1;
        }
        cout << m << endl; 
    }
    return 0;
}

