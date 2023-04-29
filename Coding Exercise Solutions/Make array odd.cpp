
//https://www.codechef.com/problems/MAKEARRAYODD

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        int r = 0;
        cin >> n >> x;
        int arr[n+1];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                r=r+1;
            }
        }
        if (x % 2 == 0)
        {
            if (r == 0)
            {
                cout<< -1 << endl;
            }
            else
            {
                int p = n - r;
                cout << p << endl;
            }
        }
        else
        {
            int p = n - r;
            if (p % 2 == 0)
            {
                cout << (p / 2) << endl;
            }
            else
            {
                cout << (p / 2) + 1 << endl;
            }
        }
    }
    return 0;
}
