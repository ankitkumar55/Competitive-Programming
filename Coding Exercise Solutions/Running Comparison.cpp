
//https://www.codechef.com/problems/RUNCOMPARE

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
        int m=0, l=0;
        int arr[n], brr[n];
        
        for (int i = 0; i < n; i++)
        {
            cin>> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>> brr[i];
        }

        for (int i = 0; i < n; i++)
        {
            int a= max(arr[i], brr[i]);
            int b= min(arr[i], brr[i]);
            if(2*b < a){
                l=l+1;
            }

        }
        cout << n-l << endl; 
    }
    return 0;
}

