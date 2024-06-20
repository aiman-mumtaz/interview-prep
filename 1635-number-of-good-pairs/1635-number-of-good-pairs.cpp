class Solution {
public:
    int numIdenticalPairs(vector<int>& a) {
        unordered_map<int,int> mpp;
        int cnt = 0;
        for(int i=0;i<a.size();i++){
            mpp[a[i]]++;
        }
        
        for(auto x:mpp){
            if(x.second > 1){
                cnt += (x.second*(x.second-1))/2;
            }
        }
        return cnt;
    }
};