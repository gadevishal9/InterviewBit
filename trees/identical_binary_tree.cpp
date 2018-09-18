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
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if(A==B && A== NULL) return 1;
    if(A && B)
    {
        if(isSameTree(A->left,B->left) == 0) return 0;
        if(A->val != B->val) return 0;
        if(isSameTree(A->right,B->right) == 0) return 0;
    }
    else if(A == NULL || B == NULL) return 0;
    return 1;
}
