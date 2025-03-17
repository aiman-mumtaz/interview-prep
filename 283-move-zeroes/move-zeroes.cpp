class Solution {
public:
    void moveZeroes(vector<int>& a) {
        vector<int> ans;
        int cnt=0;
        for(int i=0;i<a.size();i++){
            if(a[i] == 0){
                cnt++;
            }else{
                ans.push_back(a[i]);
            }
        }
        while(cnt--){
            ans.push_back(0);
        }
        a = ans;
        
    }
};