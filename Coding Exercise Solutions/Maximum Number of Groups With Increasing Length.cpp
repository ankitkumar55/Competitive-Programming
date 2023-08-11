
// https://leetcode.com/submissions/detail/1002671878/

class Solution {
public:
    int maxIncreasingGroups(vector<int>& usageLimits) {
        sort(usageLimits.begin(), usageLimits.end());
        long long count = 0, k = 0;
        for (int a : usageLimits) {
            count += a;
            if (count >= (k + 1) * (k + 2) / 2)
                k++;
        }
        return k;
        
    }
};
