class Solution {
public:
    int findMiddleIndex(vector<int>& a) {
        vector<int> lSum(a.size(),0);
        lSum[0] = a[0];

        vector<int> rSum(a.size(),0);
        rSum[a.size()-1] = a[a.size()-1];

        for(int i=1;i<a.size();i++){
            lSum[i] = lSum[i-1] + a[i];
        }
        for(int i=a.size()-2;i>=0;i--){
            rSum[i] = rSum[i+1] + a[i];
        }

        for(int i=0;i<a.size();i++){
            if(lSum[i] == rSum[i]){
                return i;
            }
        }
        return -1;
    }
};