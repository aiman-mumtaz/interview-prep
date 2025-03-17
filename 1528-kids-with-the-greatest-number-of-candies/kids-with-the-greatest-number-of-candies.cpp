class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& a, int k) {
        vector<bool> ans(a.size(),true);
        int greatest=0;
        for(auto x: a){
            if(x > greatest){
                greatest = x;
            }
        }
        for(int i=0;i<a.size();i++){
            if((a[i]+k) >= greatest){
                ans[i]=true;
            }else{
                ans[i]=false;
            }
        }
        return ans;
    }
};