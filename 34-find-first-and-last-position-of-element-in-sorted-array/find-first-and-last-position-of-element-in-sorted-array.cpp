class Solution {
public:
    int findLower(vector<int>& a, int target){
        int s = 0,e=a.size()-1;
        int lower = -1;
        while(s<=e){
            int mid = s+ (e-s)/2;
            if(a[mid] == target){
                lower = mid;
                e = mid-1;
            }else if(a[mid]<target){
                s= mid+1;
            }else{
                e=mid-1;
            }
        }
        return lower;
    }
    int findUpper(vector<int>& a, int target){
        int s = 0,e=a.size()-1;
        int upper = -1;
        while(s<=e){
            int mid = s+ (e-s)/2;
            if(a[mid] == target){
                upper = mid;
                s = mid+1;
            }else if(a[mid]<target){
                s= mid+1;
            }else{
                e=mid-1;
            }
        }
        return upper;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = findLower(nums,target);
        int up = findUpper(nums,target);
        return {low,up};
    }
};