class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& a) {
        unordered_map<int,int> mpp;
        for(auto x:a){
            mpp[x]++;
        }
        vector<int> ans;
        for(auto x:mpp){
            if(x.second > 1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};