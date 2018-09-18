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

TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    stack<TreeNode*> st;
    TreeNode * temp = NULL;
    st.push(A);
    while(!st.empty())
    {
        TreeNode* node = st.top();
        if(temp == NULL)
        {
            temp = st.top();

            st.pop();
        }
        else
        {

            temp->right = node;
            temp->left =NULL;
            temp = temp->right;
            st.pop();
        }
        if (node->right)
            st.push(node->right);
        if (node->left)
            st.push(node->left);

    }


    return A;

}
