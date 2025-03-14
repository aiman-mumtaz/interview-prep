class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        // unordered_map<int,int> mpp;
        for(int i=0;i<a.size();i++){
            // mpp.insert({a[i],i});
            for(int j =i+1;j<a.size();j++){
                if(a[i] + a[j] == k){
                    return {i,j};
                }
            }
        }
        
        return {-1,-1};
    }
};