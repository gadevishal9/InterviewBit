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
void path(TreeNode *root,int sum,vector<vector<int>> &ans,vector<int> &temp,int curr)
{
    if(root == NULL) return;
    if(root->left  == NULL && root->right == NULL)
    {
        curr = curr + root->val;
        if(curr == sum)
        {
            temp.push_back(root->val);
            ans.push_back(temp);
            temp.pop_back();
        }
        return;
    }
    if(root)
    {
        temp.push_back(root->val);
        path(root->left,sum,ans,temp,curr+ (root->val));
        path(root->right,sum,ans,temp,curr+(root->val));
        temp.pop_back();

    }
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int>> ans;
    vector<int> temp;
    path(A,B,ans,temp,0);
    return ans;
}
