/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // int helper(TreeNode* root, int ans){
    //     if((root == NULL) || (root->left == NULL) && (root->right == NULL)){
    //         return ans;
    //     }
    //     if(root->left != NULL)
    //         return helper(root->left,ans+2);
    //     if(root->right != NULL)
    //         return helper(root->right,ans+2);
    //     return ans;
    // }
    int countNodes(TreeNode* root) {
        // return helper(root,0);
        if(root == NULL){
            return 0;
        }
        return 1 + countNodes(root->left)+countNodes(root->right);
    }
};