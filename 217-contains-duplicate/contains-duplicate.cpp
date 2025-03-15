class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        unordered_map<int,int> mpp;
        for(auto x: a){
            mpp[x]++;
        }
        for(auto x:mpp){
            if(x.second > 1){
                return true;
            }
        }
        return false;
    }
};