class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        
        int ans=0;
        
      
        
        for(int i=0; i<words.size()-1; i++){
            for(int j=i+1; j<words.size(); j++){
                
                int len1=words[i].length();
                int len2=words[j].length();
                
               if( (len1 <= len2) && (words[j].substr(0, len1) == words[i]) && (words[j].substr(len2 - len1) == words[i])){
                   
                   ans++;
                   
               }
            
             
            }
            
             
        }
        
        return ans;
        
    }
};
