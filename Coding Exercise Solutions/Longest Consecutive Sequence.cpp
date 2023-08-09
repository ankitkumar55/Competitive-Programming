// https://leetcode.com/submissions/detail/1016615826/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }

        // sort(nums.begin(), nums.end());

        // vector<int>::iterator new_end;
    
        // for(int i=0; i<nums.size()-1; i++){
        //     if(nums[i]==nums[i+1]){
        //     new_end = remove(nums.begin(), nums.end(), nums[i]);
        //     nums.push_back(nums[i]);
     
        //     }
        // }

        sort(nums.begin(), nums.end());

        int final=1;
        int count=1;

       

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i+1]-nums[i]==1){
                count=count+1;
                final=max(final,count);
             
            }

            else if(nums[i]==nums[i+1]){
                continue;
            }
            
            else{
                count=1;
            }
        }

        return final;
    
    }
};
