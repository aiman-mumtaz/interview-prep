class Solution {
public:
    int helper(vector<int>&nums, int i, int ans){
        if(i == nums.size()){
            return ans;
        }
        int included = helper(nums,i+1,ans ^ nums[i]);
        int excluded = helper(nums,i+1,ans);
        return included+excluded;
    }
    int subsetXORSum(vector<int>& nums) {
        return helper(nums,0,0);
    }
};