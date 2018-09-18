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
void nodes(TreeNode *root,int &B,int &value)
{
    if(root == NULL) return;
    nodes(root->left,B,value);

    if(B > 1) B = B-1;
    else if (B == 1 ){
        //cout<<"i am in";
        value  = root->val;
        B = B -1;
        return;

    }
    else return;

    nodes(root->right,B,value);

}
int Solution::kthsmallest(TreeNode* A, int B) {
    int value =-10;
    nodes(A,B,value);
    return value;






}
