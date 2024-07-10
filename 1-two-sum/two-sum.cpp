class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        unordered_map<int,int> mpp;
        // vector<int> v(2,0);
        for(int i=0;i<a.size();i++){
            if(mpp.find(target - a[i]) != mpp.end()){
                return {i,mpp[target-a[i]]};
            }else{
                mpp[a[i]] = i;
            }
        }
        return {};
    }
};