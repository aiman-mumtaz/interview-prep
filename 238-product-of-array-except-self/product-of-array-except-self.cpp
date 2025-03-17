class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        vector<int> prefix(a.size(),1);
        vector<int> suffix(a.size(),1);
        for(int i=1;i<a.size();i++){
            prefix[i] = prefix[i-1]*a[i-1];
        }
        for(int i=a.size()-2;i>=0;i--){
            suffix[i] = suffix[i+1] * a[i+1];
        }
        for(int i=0;i<a.size();i++){
            prefix[i] = prefix[i] * suffix[i];
        }
        return prefix;
    }
};