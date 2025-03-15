class Solution {
public:
    int majorityElement(vector<int>& a) {
        unordered_map<int,int> mpp;
        for(auto x:a){
            mpp[x]++;
        }
        for(auto x:mpp){
            if((x.second) > (a.size()/2)){
                return x.first;
            }
        }
        return 0;
    }
};