// class Solution {
// public:
//     vector<long long> distance(vector<int>& nums) {
        
//         vector<long long> fin;
        
//         long long k=0;

//         if(nums.size()==1){
//             fin.push_back(0);
//             return fin;
//         }
        
//         unordered_map<long long, long long> m;
//         unordered_map<long long, long long> n;
        
//         long long ans=0;
        
//         for(int i=0; i<nums.size(); i++){
            
//             n[nums[i]]++;
                
//             m[nums[i]]= m[nums[i]]+i;
            
//         }
        
//         for(int i=0; i<nums.size(); i++){
            
//             if(n[nums[i]]==1){
//                 fin.push_back(0);
//             }
            
//             else if(n[nums[i]]-1==i){
                
//                 k=n[nums[i]];
//                 ans=abs((i*(k-1))-(m[nums[i]]-i))+i;
//                 fin.push_back(ans);
            
//             }
            
            
//             else{
                
//                 k=n[nums[i]];
//                 ans=abs((i*(k-1))-(m[nums[i]]-i));
//                 fin.push_back(ans);
            
//             }
  
//         }
        
//         return fin;
 
//     }
// };

// METTHOD 2::


class Solution {
public:
    typedef long long ll;
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long> ans(n);
        map<ll, ll> mp1, mp2, mp3, mp4;
        
        for(int i=0; i<n; i++){
            mp1[nums[i]]+=i;
            mp4[nums[i]]++;
        }
    
        for(int i=0; i<n; i++){
            mp2[nums[i]]++;
            mp3[nums[i]]+=i;
            ll fre = mp2[nums[i]];
            ll count = mp3[nums[i]];
            ll sum=0;
        
            sum = i*(fre) - 2*count  + mp1[nums[i]] - i*(mp4[nums[i]] - fre);
            
            ans[i] = sum;
        }
        return ans;
    }
};
