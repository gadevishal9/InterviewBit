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
int balanced(TreeNode* A,bool &k)
{
    if(A == NULL) return 0;
    if(A)
    {
        int left= balanced(A->left,k);
        int right = balanced(A->right,k);
        if(max(left,right) -  min(left,right) > 1) {k = false; return 2;}
        return 1 + max(left,right);
    }
}
int Solution::isBalanced(TreeNode* A) {
    bool k = true;
    balanced(A,k);
    return k;

}
