class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> a(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            a[nums[i]]=1;
        }
        for(auto x:a){
            cout<<x<<" ";
        }
        for(int i=0;i<a.size();i++){
            if(a[i]==0){
                return i;
            }
        }
        return 0;
    }
};