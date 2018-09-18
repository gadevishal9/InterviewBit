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
int sum(TreeNode* root,int B,unordered_map<int,int> &hash)
{
    if(root == NULL) return 0;
    if(hash[B-root->val] == 1)
    {
        return 1;
    }
    else hash[root->val] =1;

    return sum(root->left,B,hash)+sum(root->right,B,hash);
}

int Solution::t2Sum(TreeNode* A, int B) {
    unordered_map<int,int> hash;
    //cout<<sum(A,B,hash);
    return (sum(A,B,hash));

}
