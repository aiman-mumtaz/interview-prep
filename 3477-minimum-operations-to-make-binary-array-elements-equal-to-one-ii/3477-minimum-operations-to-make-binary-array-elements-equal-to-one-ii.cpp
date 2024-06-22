class Solution {
public:
    int minOperations(vector<int>& a) {
        int cnt = 0;
        for(int i=0;i<a.size();i++){
            if(a[i] == 0){
                if(cnt%2 == 0){
                    cnt++;
                }
            }else{
                if(cnt%2 == 1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};