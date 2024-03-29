

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int a1 = 0, b1 = 0, a2 = 0, b2 = 0;
        vector<int> ans;
        for(int i = 0; i < A.size(); ++i){
            if(A[i] < 32) a1 = (a1 | (1 << A[i]));
            else a2 = (a2 | (1 << (A[i] - 31)));
            if(B[i] < 32) b1 = (b1 | (1 << B[i]));
            else b2 = (b2 | (1 << (B[i] - 31)));
            ans.push_back(__builtin_popcount((a1 & b1))  + __builtin_popcount((a2 & b2)));
        }
        return ans;
    }
};
