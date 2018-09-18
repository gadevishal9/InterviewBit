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
void ancestor(TreeNode *root,int B,int C, vector<int> &arr_b,vector<int> &arr_c,vector<int> curr)
{
    if(root == NULL) return;
    curr.push_back(root->val);
    if(root->val == B)
    {
        arr_b = curr;


    }
    if ( root->val == C)
    {
        arr_c = curr;

    }
    ancestor(root->left,B,C,arr_b,arr_c,curr);
    ancestor(root->right,B,C,arr_b,arr_c,curr);

}
int Solution::lca(TreeNode* A, int B, int C) {
    vector<int> arr_b;
    vector<int> arr_c;
    vector<int> curr;
    curr.push_back(A->val);
    ancestor(A,B,C,arr_b,arr_c,curr);
    if(arr_c.size() == 0  || arr_b.size() == 0) return -1;
    int diff = max(arr_c.size(),arr_b.size()) - min(arr_c.size(),arr_b.size());
    for(int i=arr_b.size()-1;i>=0;i--)
        if(arr_b[i] == arr_c[i]) return arr_b[i];
}
