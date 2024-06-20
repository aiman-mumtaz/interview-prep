class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        unordered_map<int,int> mpp;
        vector<int> v(2,0);
        for(int i=0;i<a.size();i++){
            if(mpp.find(target - a[i]) != mpp.end()){
                // return {i,mpp.get(target-a[i]);}
                v[0]=i;
                v[1]=mpp[target-a[i]];
                return v;
            }else{
                mpp[a[i]] = i;
            }
        }
        return v;
    }
};