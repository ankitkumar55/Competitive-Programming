
// https://leetcode.com/submissions/detail/1017141106/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        
        unordered_map<string, vector<string>> m;
        
        for(auto h: strs){
            
            string temp=h;
            
            sort(h.begin(), h.end());
            m[h].push_back(temp);
        }
        
        for(auto i: m){
            
            ans.push_back(i.second);
            
        }
        
        return ans;
        
        
    }
};

