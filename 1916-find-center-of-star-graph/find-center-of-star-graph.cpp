class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> mpp(n+2,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                mpp[edges[i][j]]++;
            }
        }
        for(int i=0;i<mpp.size();i++){
            if(mpp[i] == n){
                return i;
            }
        }
        return 0;
    }
};