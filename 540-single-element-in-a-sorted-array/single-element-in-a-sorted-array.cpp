class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        if(a.size()==1){
            return a[0];
        }
        int s=0,e=a.size()-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(mid == a.size()-1 || mid == 0){
                return a[mid];
            }
            if(mid%2 == 0){
                if(a[mid-1] == a[mid]){
                    e=mid-1;
                }else if(a[mid+1] == a[mid]){
                    s=mid+1;
                }else{
                    return a[mid];
                }
            }else{
                if(a[mid-1] == a[mid]){
                    s=mid+1;
                }else if(a[mid+1] == a[mid]){
                    e=mid-1;
                }else{
                    return a[mid];
                }
            }
        }
        return -1;
    }
};