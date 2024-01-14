class Solution {
public:
    bool closeStrings(string word1, string word2) {

        unordered_map<char, int> m;
        unordered_map<char, int> n;
        vector<int> a;
        vector<int> b;

        if(word1.size() != word2.size()){
            return false;
        }

        for(int i=0; i<word1.size(); i++){

            m[word1[i]]++;
            n[word2[i]]++;

        }

         for(auto & lt:m){

             if(n[lt.first]>0){
                 a.push_back(lt.second);
                 b.push_back(n[lt.first]);
             }
             else{
                 return false;
             }
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if(a==b){
            return true;
        }
        else{
            return false;
        }

    }
};
