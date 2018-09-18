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
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> k;
    TreeNode *temp = A;
    if(!A) return ans;
    bool flag = true;
    while(flag)
    {
        if(temp)
        {
            k.push(temp);

            temp = temp->left;
        }
        else
        {
            while(!k.empty())
            {
                if(k.top()->right == NULL)
                {
                    ans.push_back(k.top()->val);
                    k.pop();
                    if(k.empty()) flag = false;
                }
                else
                {
                    //ans.push_back(k.top()->val);
                    temp = k.top()->right;
                    k.pop();
                    break;
                }
            }

        }


    }
    return ans;
}
