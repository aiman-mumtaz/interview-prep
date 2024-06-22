class Solution {
public:
    int minOperations(vector<int>& a) {
        int cnt = 0;
        for(int i=0;i<a.size()-2;i++){
            if(a[i] == 0){
                a[i] = !a[i];
                a[i+1] = !a[i+1];
                a[i+2] = !a[i+2];
                cnt++;
            }
        }
        if(a[a.size()-1] == 0 || a[a.size()-2] == 0){
            return -1;
        }
        return cnt;
    }
};