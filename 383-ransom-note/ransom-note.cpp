class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26] = {0};
        int arr1[26] = {0};
        for(char x: ransomNote){
            arr[x-'a']++;
        }
        for(char x: magazine){
            arr1[x-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i] > arr1[i]){
                return false;
            }
        }
        return true;
    }
};