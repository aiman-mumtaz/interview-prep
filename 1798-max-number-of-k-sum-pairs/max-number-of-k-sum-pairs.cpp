class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // int ans = 0;
        // sort(a.begin(),a.end());
        // int i=0,j=a.size()-1;
        // while(i<j){
        //     if(a[i] + a[j] == k){
        //         ans++;
        //         i++;
        //         j--;
        //     }else if(a[i] + a[j] > k){
        //         j--;
        //     }else{
        //         i++;
        //     }
        // }
        // vector<int> mpp;
        vector<pair<int, int>> freq;  // Vector of pairs: {number, frequency}
        int operations = 0;

        // Iterate through the numbers in the array
        for (int num : nums) {
            int complement = k - num;

            // Binary search to find the complement in the vector
            auto it = lower_bound(freq.begin(), freq.end(), make_pair(complement, 0));

            if (it != freq.end() && it->first == complement && it->second > 0) {
                // If complement is found in the vector and has a positive frequency, form a pair
                operations++;
                it->second--;  // Decrease the frequency of the complement
            } else {
                // Otherwise, insert the current number into the vector, maintaining sorted order
                it = lower_bound(freq.begin(), freq.end(), make_pair(num, 0));
                if (it != freq.end() && it->first == num) {
                    // If the number is already in the vector, increase its frequency
                    it->second++;
                } else {
                    // If the number is not in the vector, add it with frequency 1
                    freq.insert(it, make_pair(num, 1));
                }
            }
        }
        return operations;
    }
};