//https://www.codechef.com/problems/CUTOFF

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
        int arr[a+1];
        for(int i=0; i<a; i++){
            cin >> arr[i];
        }
        int c=0;
        for(int i=0; i<b; i++){
            c=0;
            for(int i=0; i<a; i++){
                if(arr[i]>c){
                    c=arr[i];
                }
            }
            for(int i=0; i<a; i++){
                if(arr[i]==c){
                    arr[i]=0;
                }
            }
            
        }
        cout << c-1 << endl;
        
    }
    return 0;
}
