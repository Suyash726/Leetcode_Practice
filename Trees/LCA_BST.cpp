/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     
        int a = root->val - p->val;
        int b = root->val - q->val;
        
        if(a >0 && b>0)
        {
            return lowestCommonAncestor(root->left,p,q);
            
        }
        if(a<0 && b<0) return lowestCommonAncestor(root->right,p,q);
        
        return root;
        
    }
};
