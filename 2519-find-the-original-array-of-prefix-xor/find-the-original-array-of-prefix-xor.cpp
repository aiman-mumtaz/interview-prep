class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans(pref.size(),0);
        ans[0] = pref[0];
        for(int i=1;i<pref.size();i++){
            cout<<(pref[i-1] ^ pref[i])<<" ";
            ans[i] = pref[i-1] ^ pref[i];
        }
        return ans;
    }
};