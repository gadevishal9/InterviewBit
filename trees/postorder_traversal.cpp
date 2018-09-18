/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> k;
    TreeNode *temp = A,*last = NULL;
    if(!A) return ans;
    int top;
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
                    last = k.top();
                    k.pop();

                    if(k.empty()) flag = false;
                }
                else
                {
                    if(last == k.top()->right)
                    {
                        ans.push_back(k.top()->val);
                        last = k.top();
                        k.pop();
                        if(k.empty()) flag = false;
                        continue;
                    }
                    temp = k.top()->right;


                    break;
                }
            }

        }


    }
    return ans;
}
//
// Created by vishal gade on 9/18/18.
//

