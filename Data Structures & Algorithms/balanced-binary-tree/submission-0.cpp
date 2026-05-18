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
    int check_depth(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int lh=check_depth(root->left);
        if(lh==-1){
            return -1;
        }
        int rh=check_depth(root->right);
        if(rh==-1){
            return -1;
        }

        if(abs(lh-rh)>1){
            return -1;
        }
        return 1+max(lh,rh);
    }
    
    bool isBalanced(TreeNode* root) {
        if(check_depth(root)==-1){
            return false;
        }
        else{
            return true;
        }
    }
};
