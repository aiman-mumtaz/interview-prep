class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int cnt=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==0){
                a.erase(a.begin()+i);
                cnt++;
                i--;
            }
        }
        while(cnt--){
            a.push_back(0);
        }
    }
};