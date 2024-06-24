class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int cnt=0,maxx=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==1){
                cnt++;
            }else{
                cnt=0;
            }
            maxx=max(cnt,maxx);
        }
        return maxx;
    }
};