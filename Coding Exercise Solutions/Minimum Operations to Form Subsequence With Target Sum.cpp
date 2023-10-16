
class Solution {
public:
    int minOperations(vector<int>& nums, int target) {
        int cnt[32] = {}, ops = 0, j = 32;
        for (int n : nums)
            ++cnt[(int)log2(n)];
        for (int i = 0; i < 31; ++i) {
            int bit = 1 << i;
            if (target & bit) {
                if (cnt[i])
                    --cnt[i];
                else
                    j = min(j, i);
            }
            if (cnt[i] && j < i) {
                --cnt[i];
                ops += i - j;
                j = 32;
            }
            cnt[i + 1] += cnt[i] / 2;
        }
        return j < 32 ? -1 : ops;
        
    }
};
