class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& a) {
        map<int,int>mpp;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<2;j++){
                if(!mpp[a[i][j]]){
                    mpp[a[i][j]]=0;
                }
                if(j==1){
                    mpp[a[i][j]]++;
                }
            }
        }
        
        vector<vector<int>> ans(2);
        for(auto x:mpp){
            if(x.second == 0){
                ans[0].push_back(x.first);
            }
            if(x.second == 1){
                ans[1].push_back(x.first);
            }
        }
        return ans;
    }
};