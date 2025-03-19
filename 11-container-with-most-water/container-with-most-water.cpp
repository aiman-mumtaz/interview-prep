class Solution {
public:
    int maxArea(vector<int>& a) {
        int i=0,j=a.size()-1;
        int ans = 0;
        while(i <= j){
            if(a[i] > a[j]){
                ans = max(ans,a[j]*(j-i));
                j--;
            }else{
                ans = max(ans,a[i]*(j-i));
                i++;
            }
        }
        return ans;
    }
};