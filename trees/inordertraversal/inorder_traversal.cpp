/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> s;
    s.push(A);

    while(true)
    {
        if(A)
        {
            s.push(A);
            A = A->left;
        }
        else
        {
            if(s.empty()) break;
            ans.push_back(s.top()->val);
            A = s.top()->right;

            s.pop();
            //if(s.empty()) break;
            //s.push(A);
            //if(s.empty()) break;
        }

    }
    return ans;
}
