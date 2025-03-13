class Solution {
public:
    void subsetHelper(int i,vector<int> a, vector<vector<int>> &sub,vector<int> &tmp){
        if(i == a.size()){
            sub.push_back(tmp);
            return;
        }
        // include
        tmp.push_back(a[i]);
        subsetHelper(i+1,a,sub,tmp);

        // exclude and backtrack
        tmp.pop_back();
        subsetHelper(i+1,a,sub,tmp);
    }
    int countMaxOrSubsets(vector<int>& a) {
        int maxOr = 0;
        for(auto x:a){
            maxOr = x | maxOr;
        }
        vector<vector<int>> sub;
        vector<int> tmp;
        subsetHelper(0,a,sub,tmp);

        int ans = 0;
        for(int i=0;i<sub.size();i++){
            int res=0;
            for(int j=0;j<sub[i].size();j++){
                res = res | sub[i][j];
            }
            if(res == maxOr){
                ans++;
            }
        }
        return ans;
    }
};