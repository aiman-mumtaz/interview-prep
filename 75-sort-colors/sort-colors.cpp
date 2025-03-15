class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for(auto x: nums){
            if(x == 0){
                z++;
            }else if(x == 1){
                o++;
            }else{
                t++;
            }
        }
        int i=0;
        while(z--){
            nums[i++]=0;
        }
        while(o--){
            nums[i++]=1;
        }
        while(t--){
            nums[i++]=2;
        }
    }
};