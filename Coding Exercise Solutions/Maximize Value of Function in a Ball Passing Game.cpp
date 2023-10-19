

class Solution {
public:
    long long getMaxFunctionValue(vector<int>& receiver, long long k) {
        int m = log2(1e10) + 5, n = receiver.size();
    
        vector<vector<pair<long long, long long>>> recvIdValue(m, vector<pair<long long, long long>> (n));
          for (int id = 0; id < n; ++id) recvIdValue[0][id] = make_pair(receiver[id], receiver[id]);
        for (int pos = 1; pos < m; pos++) {
            for (int id = 0; id < n; id++) {
                int prevRec = recvIdValue[pos-1][id].first;
                long long addVal = recvIdValue[pos-1][prevRec].second; 
                recvIdValue[pos][id] = make_pair(recvIdValue[pos-1][prevRec].first, recvIdValue[pos-1][id].second + addVal);
            }
        }
        long long maxValSum = 0;
        for (int id = 0; id < n; id++) {
            long long currValSum = id;
            int currRec = id;
            for (int pos = 0; pos < m; pos++) {
                if (((1l << pos) & k)){ 
                    currValSum += recvIdValue[pos][currRec].second;
                    int prevRec = recvIdValue[pos][currRec].first;
                    currRec = prevRec;
                } 
            }
            maxValSum = max(currValSum, maxValSum);
        }
        return maxValSum;

    }
};
