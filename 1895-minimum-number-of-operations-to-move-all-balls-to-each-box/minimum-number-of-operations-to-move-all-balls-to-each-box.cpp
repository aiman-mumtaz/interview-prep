class Solution {
public:
    vector<int> minOperations(string a) {
        vector<int> ans(a.length(),0);
        for(int i=0;i<a.length();i++){
            int tmp=0;
            for(int j=0;j<a.length();j++){
                if(a[j] == '1'){
                    tmp += abs(i-j);
                }
            }
            ans[i]=tmp;
        }
        return ans;
    }
};