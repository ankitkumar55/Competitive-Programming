

class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int ans=0;
        int n=nums.size();
        
        unordered_map<int, int> m;
        
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        
        for (auto i : m){
            int p=i.second;
            
            if(p<2){
                return -1;
                break;
            }
            
            else if(p%3==0){
                ans=ans+p/3;
            }
            else if((p%3)%2==0 ){
                
                ans=ans+((p/3) + (p%3)/2 );
                
            }
            
            else if((p%3)%2!=0){
                ans=ans+(p/3) + 1;
            }
        } 
        
        return ans; 
        
    }
};
