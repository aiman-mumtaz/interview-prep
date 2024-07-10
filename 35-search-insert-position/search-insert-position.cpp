class Solution {
public:
    int searchInsert(vector<int>& a, int k) {

        int s=0,e=a.size()-1;
        while(s<=e){
            int mid = (s+e)/2;
            if(a[mid]==k){
                return mid;
            }else if(a[mid]>k){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return s;
    }
};