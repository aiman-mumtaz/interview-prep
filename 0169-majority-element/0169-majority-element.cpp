class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int freq[100005]={0};
        unordered_map<int,int> mpp;
        for(auto x:nums){
            mpp[x]++;
        }
        for(auto x:mpp){
            if(x.second>nums.size()/2){
                return x.first;
            }
        }
        return 0;
    }
};