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

int Solution::minDepth(TreeNode* A) {
    if( A == NULL) return 0;
    int l,r;
    if(A->left != NULL && A->right !=NULL)
    {
        l= minDepth(A->left);
        r= minDepth(A->right);
        return 1+ min(l,r);

    }
    else if(A->left != NULL)
    {
        l= minDepth(A->left);
        //r= minDepth(A->right);
        return 1+ l;

    }
    else if( A->right !=NULL)
    {
        //l= minDepth(A->left);
        r= minDepth(A->right);
        return 1+ r;

    }
    else
    {
        return 1;
    }

}
