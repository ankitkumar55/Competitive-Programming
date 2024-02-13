class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        vector<int>v;
        for(int i=0; i<as.size(); i++){
            if(v.size()==0 || as[i]>0 || v.back()<0){
                 v.push_back(as[i]);
            }
            else if(as[i]<0 && v.back()>0 && abs(as[i])>=v.back()){
            if(abs(as[i])>v.back()) i--;
            v.pop_back();          
            }
        }
        return v;
    }
};
