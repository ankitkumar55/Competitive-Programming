class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> um;
        int ans=0;
        for(int i=0,j=0;j<=fruits.size();j++) {
            if(j!=fruits.size() && (um.size()<2 || um.find(fruits[j])!=um.end()))
                um[fruits[j]]++;
            else {
                ans=max(ans,j-i);
                while(i<fruits.size() && um.size()!=1) {
                    um[fruits[i]]--;
                    if(um[fruits[i]]==0)
                        um.erase(fruits[i]);
                    i++;
                }
                if(j!=fruits.size())
                    um[fruits[j]]++;
            }
        }
        return ans;
    }
};
