class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0,j=0;
        vector<int> ans;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                if((ans.size()==0) || ans[ans.size()-1] != a[i]){
                    ans.push_back(a[i]);
                }
                i++;
            }else if(a[i]>b[j]){
                j++;
            }else{
                i++;
            }
        }
        return ans;
    }
};