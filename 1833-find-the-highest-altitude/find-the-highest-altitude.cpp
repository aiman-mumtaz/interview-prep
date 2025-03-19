class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mxm = max(gain[0],0);
        for(int i=1;i<gain.size();i++){
            gain[i] += gain[i-1];
            mxm = max(gain[i],mxm);
        }
        return mxm;
    }
};