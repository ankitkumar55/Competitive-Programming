class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        
      int n=nums.size();

        
        bool flag;
        
        bool ans=true;
        
        for (int i = 0; i < n - 1; ++i) {
            flag = false;

            for (int j = 0; j < n - i - 1; ++j) {
                if (nums[j] > nums[j + 1]) {
                    
                    if(__builtin_popcount(nums[j]) != __builtin_popcount(nums[j+1])){
                        
                        ans=false;
                        break;
                        
                    }
                    else{
                        
                        int h=nums[j];
                        nums[j]=nums[j+1];
                        nums[j+1]=h;
                    
                        flag = true;
                    }
                
                    
                }
            }

            if (!flag) {
                break;
            }
      }
        
        return ans;
    
        
    }
};
