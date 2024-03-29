

class Solution {
public:
    long long makeSubKSumEqual(vector<int>& arr, int k) {
        long long res = 0;
        int n = arr.size();
        k = __gcd(k , n);

        for(int i=0;i<k;i++) {
            vector<int> vec;
            for(int j = i;j<n;j+=k)
                vec.push_back(arr[j]);

            sort(vec.begin() , vec.end());
            long long mid = vec[vec.size()/2];
            
            for(int j=i;j<n;j+=k) 
                res += abs(mid - arr[j]);
        }
        return res;
    }
};
