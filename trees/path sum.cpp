//
// Created by vishal gade on 9/18/18.
//

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* A, int B) {
    if(A == NULL) return 0;
    if(B == A->val && A->left == NULL && A->right == NULL)
    {
        return 1;
    }
    if(hasPathSum(A->left,B- A->val) == 1)return 1;

    if(hasPathSum(A->right,B- A->val) == 1)return 1;

    return 0;
}
