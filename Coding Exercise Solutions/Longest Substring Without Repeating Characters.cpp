// https://leetcode.com/submissions/detail/1012165639/

#include<map>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        
        
//         unordered_map<char, int> m;
        
//         int ans=0;
        
//         int count =0;
        
//         if(s.length()==0){
//             return 0;
//         }
        
//         for(int i=0; i<s.length()-1; i++){
            
            
//             if(s[i]!=s[i+1] && m[s[i+1]]==0){
//                 count =count+1;
//                 ans=max(ans, count);
//                 m[s[i]]++;
//             }
            
//             else{
                
//                 count=0;
//                 m.clear();
//             }           
            
//         }
        
//         if(ans==0){
//             return 1;
//         }
        
//         return ans+1;
        
        
        
        int n = s.length();
        int maxLength = 0;
        unordered_map<char, int> charMap;
        int left = 0;
        
        for (int right = 0; right < n; right++) {
            if (charMap.count(s[right]) == 0 || charMap[s[right]] < left) {
                charMap[s[right]] = right;
                maxLength = max(maxLength, right - left + 1);
            } else {
                left = charMap[s[right]] + 1;
                charMap[s[right]] = right;
            }
        }
        
        return maxLength;
       
    }
};
