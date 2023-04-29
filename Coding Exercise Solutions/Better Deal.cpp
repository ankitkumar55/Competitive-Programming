
//https://www.codechef.com/problems/BETDEAL

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
        cin >> a >> b;
        int c, d;
        c= 100-a;
        d= 200-2*b;
        if(c<d){
            cout << "FIRST"<< endl;
        }
        else if(c==d){
            cout << "BOTH" << endl;
        }
        else{
            cout << "SECOND" << endl;
        }
    }
    return 0;
}
