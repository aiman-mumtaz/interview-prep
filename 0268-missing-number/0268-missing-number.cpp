class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int nSum = nums.size()*(nums.size()+1)/2;
        for(int i=0;i<nums.size();i++){
            nSum -= nums[i];
        }
        return nSum;
    }
};