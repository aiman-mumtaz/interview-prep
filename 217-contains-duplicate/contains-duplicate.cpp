class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        // unordered_map<int,int> mpp;
        // for(auto x: a){
        //     mpp[x]++;
        // }
        // for(auto x:mpp){
        //     if(x.second > 1){
        //         return true;
        //     }
        // }
        // return false;
        sort(a.begin(),a.end());
        for(int i=0;i<a.size()-1;i++){
            if(a[i] == a[i+1]){
                return true;
            }
        }
        return false;
    }
};