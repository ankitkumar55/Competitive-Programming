

// class Solution {
// public:
//     int minOperations(string s1, string s2, int x) {
        
//         int ans=0;
        
//         int n=s1.length();
        
//         int count1=0, count2=0;
        
//         for(int i=0; i<n ;i++){
            
//             if(s1[i]!=s2[i]){
                
//                 count1++;
                
//             }  
      
//         }
        
        
//         if(count1%2!=0){
//             return -1;
//         }
        
//         else{
            
//             int i=0, j=1, k;
            
//             while(j<n-1 && i<n-1){
                
//                 if(s1[i]!=s2[i] && s1[j]!=s2[j]){
//                     count2++;
//                     i=i+2;
//                     j=j+2;
//                 }
//                 else{
//                     j++;
//                     i++;
//                 }
//             }
            
            
//         }
        
//         ans=count2+(((count1-count2)/2)*x);
        
//         // int final=min(ans,(n));
        
//         return ans;
        
//     }
// };

// alternate method ::


class Solution {
    public:   int n, x;
    vector<int> a;string s, t;
    int dp[2000][2000];int f(int i, int cnt) { if (i == a.size()) {  if (cnt == 0) return 0;  return 1e9;
                                                                  } if (dp[i][cnt] != -1) return dp[i][cnt];
                                             int ans = 1e9; if (i + 1 < a.size()) {  ans = min(ans, f(i + 2, cnt) + min(x, a[i + 1] - a[i]));
                                                                                   } if (cnt > 0) {  ans = min(ans, f(i + 1, cnt - 1)); } ans = min(ans, f(i + 1, cnt + 1) + x); return dp[i][cnt] = ans;
                                             }    int minOperations(string s, string t, int z) {       n=s.size();        x=z; 
                                                                                                a.clear();  for (int i = 0; i < n; i++) {   if (s[i] != t[i]) {    a.push_back(i); 
                                                                                                }  }  if (a.size() % 2) {   return -1;  } else {   for (int i = 0; i < n; i++) {    for (int j = 0; j < n; j++) {     dp[i][j] = -1;
                                                                                                }   }   return f(0,0) ;  }     return -1;
                                                                                                
                                                                                                
    }};
