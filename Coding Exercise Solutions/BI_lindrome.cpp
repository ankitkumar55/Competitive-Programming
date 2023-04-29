//https://www.codechef.com/problems/QTOO_2523

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
        string s;
        cin >> s;
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            for (int k = i + 1; k < n; k++)
            {
                if (s[i] == s[k])
                {
                    m++;
                    break;
                }
            }
        }
        if (m > 0)
        {
            int p = n - 2;
            cout << p << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
