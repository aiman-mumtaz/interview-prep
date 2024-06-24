class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int nSum = n*(n+1)/2;
        for(int i=0;i<nums.size();i++){
            nSum -= nums[i];
        }
        return nSum;
    }
};