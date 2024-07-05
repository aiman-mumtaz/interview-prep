class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int i=0,j=1;
        while(i< nums.size() && j<nums.size()){
            if(nums[i] == nums[j]){
                i+=2;
                j+=2;
            }else if(j<nums.size()-1 && nums[j]==nums[j+1]){
                return nums[i];
            }else{
                break;
            }
        }
        return nums[nums.size()-1];
    }
};