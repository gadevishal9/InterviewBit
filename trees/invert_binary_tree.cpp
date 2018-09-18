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
void invert(TreeNode *root)
{

}
TreeNode* Solution::invertTree(TreeNode* A) {
    if(A == NULL) return A;
    if(A->left != NULL) invertTree(A->left);
    {
        TreeNode *temp = A->left;
        A->left = A->right;
        A->right = temp;
    }
    if(A->left != NULL) invertTree(A->left);
    return A;
}
