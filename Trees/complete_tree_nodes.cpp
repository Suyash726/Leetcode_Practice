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
    int countNodes(TreeNode* root) {
        
        if(root == NULL)
            return 0;
        TreeNode* noderight= root;
        TreeNode* nodeleft = root;
        
        int l=0,r=0;
        
        while(nodeleft)
        {
            l++;
            nodeleft = nodeleft->left;
        }
        while(noderight)
        {
            r++;
            noderight = noderight->right;
        }
        
        if(l == r)
            return pow(2,l)-1;
        return countNodes(root->left)+countNodes(root->right)+1; 
    }
};
