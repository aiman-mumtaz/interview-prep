class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto x:nums){
            mpp[x]++;
        }
        nums.clear();
        for(auto x:mpp){
            if(x.second > 1){
                nums.push_back(x.first);
            }
        }
        return nums;
    }
};