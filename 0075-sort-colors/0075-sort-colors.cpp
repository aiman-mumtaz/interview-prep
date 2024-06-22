class Solution {
public:
    void sortColors(vector<int>& a) {
        int l=0,r=a.size()-1,i=0;
        while(i<=r){
            if(a[i]==0){
                swap(a[i],a[l]);
                l++;
            }if(a[i]==2){
                swap(a[i],a[r]);
                r--;
            }else{
                i++;
            }
        }

    }
};