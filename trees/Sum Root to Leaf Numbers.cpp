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
void sum(TreeNode* root,long long int curr,long long int &total)
{
    if(root == NULL) return;
    if(root->left ==NULL && root->right == NULL)
    {
        total = total + (curr)%1003;
    }
    if(root->left)
    {
        sum(root->left,curr*10 + root->left->val,total);
    }
    if(root->right)
    {
        sum(root->right,(curr*10)%1003 + (root->right->val)%1003,total);
    }
}
int Solution::sumNumbers(TreeNode* A) {
    long long int total = 0;
    sum(A,A->val,total);
    return total%1003;
}
