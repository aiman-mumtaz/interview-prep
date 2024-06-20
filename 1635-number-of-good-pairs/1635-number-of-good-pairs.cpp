class Solution {
public:
    int numIdenticalPairs(vector<int>& a) {
        vector<int> mpp(101,0);
        int cnt = 0;
        for(int i=0;i<a.size();i++){
            mpp[a[i]]++;
        }
        
        for(auto x:mpp){
            // cout<<x<<" ";
            if(x > 1){
                cnt += (x*(x-1))/2;
            }
        }
        return cnt;
    }
};