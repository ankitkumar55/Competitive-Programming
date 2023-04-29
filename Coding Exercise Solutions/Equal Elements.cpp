
//https://www.codechef.com/problems/EQUALELE

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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int max = 1, res = arr[0], curr = 1;
        for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr++;
        else
            curr = 1;
        
        if (curr > max) {
            max = curr;
            res = arr[i - 1];
        }
    }
     cout << n-max << endl;    
    }
    return 0;
}

