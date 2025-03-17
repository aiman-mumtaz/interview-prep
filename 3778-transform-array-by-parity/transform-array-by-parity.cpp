class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int o=0,z=0;
        for(auto x: nums){
            if(x%2==0){
                z++;
            }else{
                o++;
            }
        }
        nums={};
        while(z--){
            nums.push_back(0);
        }
        while(o--){
            nums.push_back(1);
        }
        return nums;
    }
};