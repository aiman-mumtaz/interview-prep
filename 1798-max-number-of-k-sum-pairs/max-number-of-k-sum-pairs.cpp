class Solution {
public:
    int maxOperations(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int i=0,j=a.size()-1;
        int ans = 0;
        while(i<j){
            if(a[i] + a[j] == k){
                ans++;
                i++;
                j--;
            }else if(a[i] + a[j] > k){
                j--;
            }else{
                i++;
            }
        }
        return ans;
    }
};