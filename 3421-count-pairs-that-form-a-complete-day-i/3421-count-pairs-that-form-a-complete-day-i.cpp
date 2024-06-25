class Solution {
public:
    int countCompleteDayPairs(vector<int>& a) {
        int cnt=0;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a.size();j++){
                if((i<j) && (a[i]+a[j])%24==0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};