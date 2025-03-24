class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        ans.push_back(a[0]);
        for(int i=1;i<a.size();i++){
            if(a[i][0] <= ans[ans.size()-1][1]){
                if(a[i][1] > ans[ans.size()-1][1]){
                    ans[ans.size()-1][1]=a[i][1];
                }
            }else{
                ans.push_back(a[i]);
            }
        }
        return ans;
    }
};