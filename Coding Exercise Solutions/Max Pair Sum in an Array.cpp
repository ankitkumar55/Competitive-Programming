// https://leetcode.com/submissions/detail/1019922614/

class Solution {
public:
    // int maxSum(vector<int>& nums) {
        
    //     int ans;
    //     int g=0;
        
    //     for(int i=0; i<nums.size(); i++){
            
    //         int k=nums[i], m=0;
            
    //         while(k!=0){
                
    //             int p=k/10;
                
    //             int m=max(p,m);
    //             k=k/10;
                
    //         }
            
            
    //         for(int j=0; j<nums.size(); j++){
                
    //             if(i==j){
    //                 continue;
    //             }
                
    //             int l=nums[j];
    //             int n=0;
                
    //             while(l!=0){
                
    //                 int s=l/10;
    //                 n=max(s,n);
    //                 l=l/10;

    //             }
                
    //             if(n==m){
    //                 ans=nums[i]+nums[j];
    //             }
                  
                
                
                
    //         }
            
    //         g=max(ans, g);
            
            
    //     }
        
        
    //     return g;
        
    // }


        int maxSum(vector<int>& nums) {
        int ans = -1;
        unordered_map<int,vector<int>> mp;
        for(auto n: nums){
            int t = n, maxDigit = 0;
            while(t){ //evaluate max digit in the number
                maxDigit = max(t%10, maxDigit);
                t = t/10;
            }
            mp[maxDigit].push_back(n); // add the number to that 
        }
        for(auto [k, v]: mp){
            sort(v.rbegin(), v.rend()); //to find max two number in each max digit 
            if(v.size() >= 2) ans = max(ans, v[0] + v[1]); //sum max two number and take max
        }
        return ans;
    }
};
