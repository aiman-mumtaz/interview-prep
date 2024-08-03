class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = nums[0];
        for(auto x:nums){
            if(abs(x) < abs(ans)){
                ans = x;
            }
        }
        return (ans < 0 && find(nums.begin(), nums.end(), abs(ans)) != nums.end())? abs(ans) : ans;
    }
};