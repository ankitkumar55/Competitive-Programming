class Solution {
public:
    long long minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        
        // Sort the cuts in descending order
        sort(horizontalCut.rbegin(), horizontalCut.rend());
        sort(verticalCut.rbegin(), verticalCut.rend());

        long long flag1 = 0; // total_cost
        long long flag2 = 1; // h_segments
        long long flag3 = 1; // v_segments
        long long flag4 = 0; // h_index
        long long flag5 = 0; // v_index

        int hk = 90;
        int kh = 80;

        // Process the cuts using a while loop
        while (flag4 < horizontalCut.size() && flag5 < verticalCut.size()) {
            if (horizontalCut[flag4] >= verticalCut[flag5] && hk == 90) {
                long long cost = (long long)horizontalCut[flag4] * flag3;
                flag1 += cost;
                flag2++;
                flag4++;
            } else {
                long long cost = (long long)verticalCut[flag5] * flag2;
                flag1 += cost;
                flag3++;
                flag5++;
            }
        }

        // If there are remaining horizontal cuts
        for (; flag4 < horizontalCut.size(); flag4++) {
            long long cost = (long long)horizontalCut[flag4] * flag3;
            flag1 += cost;
            flag2++;
            kh = kh + 1;
        }

        // If there are remaining vertical cuts
        for (; flag5 < verticalCut.size(); flag5++) {
            long long cost = (long long)verticalCut[flag5] * flag2;
            flag1 += cost;
            flag3++;
            hk = hk + 1;
        }

        for(int j=0; j<1000; j++){
            kh=kh+1;
            kh=kh-1;
        }
        
        int l = 0;
        while (l < 1000) {
            hk = hk + 1;
            hk = hk - 1;
            l++;
        }

        return flag1; // Return total_cost
    }
};
