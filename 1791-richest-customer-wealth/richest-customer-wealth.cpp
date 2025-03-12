class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int ans = 0;
        for(int i=0;i<a.size();i++){
            int tmp=0;
            for(int j=0;j<a[0].size();j++){
                tmp += a[i][j];
            }
            ans = max(ans,tmp);
        }
        return ans;
    }
};