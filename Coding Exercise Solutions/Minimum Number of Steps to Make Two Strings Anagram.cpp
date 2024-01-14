class Solution {
public:
    int minSteps(string s, string t) {
        
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        int count=0;

        int n=s.length();

        for(int i=0; i<s.length(); i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }

        for(auto &h: m1){
            // cout << m2[h.first];

             if(m2[h.first]>0){
                 
                 m1[h.first]=((m1[h.first])-(m2[h.first]));

                 if(m1[h.first]<0){
                     m1[h.first]=0;
                 }

             }

        }

        for(auto &k: m1) {
            count=count+m1[k.first];
        }

        return count;

        //  unordered_map<char, int> m1;
        // unordered_map<char, int> m2;
        // int count = 0;

        // int n = s.length();

        // for (int i = 0; i < n; i++) {
        //     m1[s[i]]++;
        //     m2[t[i]]++;
        // }

        // for (auto& entry : m1) {
        //     char ch = entry.first;
        //     if (m2.find(ch) != m2.end()) {
        //         int diff = m1[ch] - m2[ch];
        //         count += (diff > 0) ? diff : 0;
        //     } else {
        //         count += m1[ch];
        //     }
        // }

        // return count;
        
    }
};
