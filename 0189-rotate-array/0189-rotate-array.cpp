class Solution {
public:
    void rotate(vector<int>& a, int x) {
        vector<int> ans;
        
        int j=0;
        x = x%a.size();
        if(a.size()>x) {
            j = a.size()-x;
        }else if(a.size() <x){
            j = a.size()-1;
        }
        for(int k=j;k<a.size();k++){
            ans.push_back(a[k]);
        }
        if(j>0) {
            for(int i=0;i<j;i++){
                ans.push_back(a[i]);
            }
        }
        for(int i=0;i<ans.size();i++){
            a[i] = ans[i];
        }
    }
};