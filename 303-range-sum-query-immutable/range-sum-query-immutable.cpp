class NumArray {
private:
    vector<int> nums;
    vector<int> pref;
public:
    NumArray(vector<int>& nums) {
        this->nums = nums;
        pref.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            pref.push_back(pref[i-1]+nums[i]);
        }
        
    }
    
    int sumRange(int left, int right) {
        if(left > 0){
            return pref[right] - pref[left-1];
        }
        return (pref[right]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */