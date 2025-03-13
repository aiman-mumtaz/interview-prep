class Solution {
public:
    void subsetHelper(int i,vector<vector<int>> &sub, vector<int> a, vector<int>&tmp){
        if(i == a.size()){
            sub.push_back(tmp);
            return;
        }

        // include current element and move forward
        tmp.push_back(a[i]);
        subsetHelper(i+1,sub,a,tmp);

        // exclude the element and move forward
        tmp.pop_back();
        subsetHelper(i+1,sub,a,tmp);
    }
    int subsetXORSum(vector<int>& a) {
        // create subset matrix
        vector<vector<int>> sub;
        // temporary array to push into sub at ever iteration
        vector<int> tmp;

        subsetHelper(0,sub,a,tmp);

        int ans = 0;

        for(int i=0;i<sub.size();i++){
            int res = 0;
            for(int j=0;j<sub[i].size();j++){
                res = res ^ sub[i][j];
            }
            ans += res;
        }

        return ans;
    }
};