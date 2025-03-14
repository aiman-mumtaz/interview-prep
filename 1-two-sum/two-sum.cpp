class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        unordered_map<int,int> mpp;
        for(int i=0;i<a.size();i++){
            if(mpp.find(k-a[i]) != mpp.end()){
                return {i,mpp[k-a[i]]};
            }else{
                mpp.insert({a[i],i});
            }
        }
        
        return {-1,-1};
    }
};