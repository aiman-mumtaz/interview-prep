class Solution {
public:
    int maxOperations(vector<int>& a, int k) {
        int ans = 0;
        sort(a.begin(),a.end());
        int i=0,j=a.size()-1;
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
        // vector<int> mpp;
        // for(int i=0;i<a.size();i++){
        //     if(find(mpp.begin(),mpp.end(),k-a[i]) != mpp.end()){
        //         ans++;
        //         mpp.erase(find(mpp.begin(),mpp.end(),k-a[i]));
        //     }else{
        //         mpp.push_back(a[i]);
        //     }
        // }
        return ans;
    }
};