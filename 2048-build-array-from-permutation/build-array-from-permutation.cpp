class Solution {
public:
    vector<int> buildArray(vector<int>& a) {
        vector<int> ans(a.size(),-1);
        for(int i=0;i<a.size();i++){
            ans[i] = a[a[i]];
        }
        return ans;
    }
};