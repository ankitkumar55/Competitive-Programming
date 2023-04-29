
//https://www.codechef.com/problems/TWORANGES

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        int p=max(max(x,y),max(a,b));
        int l=min(min(x,y),min(a,b));
        if((y>=a) && (b>=x)){
            int h= (p-l)+1;
            cout<<h<<endl;

        }
        else{
            int k=((y-x)+(b-a));
            cout<< k+2<<endl;
        }
    }
   return 0;
}
