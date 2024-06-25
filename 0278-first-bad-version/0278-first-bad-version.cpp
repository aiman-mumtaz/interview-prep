// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long s=1,e=n;
        while(s<=e){
            long mid=(s+e)/2;
            if(isBadVersion(mid) && !isBadVersion(mid-1)){
                return (int)mid;
            }else if(!isBadVersion(mid)){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return 0;
    }
};