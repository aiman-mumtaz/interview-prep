class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& a) {
        vector<int> loss(100005,-1);
        for(int i=0;i<a.size();i++){
            for(int j=0;j<2;j++){
                if(loss[a[i][j]] == -1){
                   loss[a[i][j]]++; 
                }
                if(j==1){
                    loss[a[i][j]]++;
                }
            }
        }
        vector<vector<int>> ans(2);
        for(int i=0;i<loss.size();i++){
            if(loss[i] == 0){
                ans[0].push_back(i);
            }
            if(loss[i] == 1){
                ans[1].push_back(i);
            }
        }
        return ans;
    }
};