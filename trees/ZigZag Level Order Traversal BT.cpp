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
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    stack<TreeNode *> st;
    st.push(A);
    bool flag = true;
    vector<vector<int>> ans;
    while(!st.empty())
    {
        stack<TreeNode*> st2;
        vector<int> temp;
        while(!st.empty())
        {
            if(flag)
            {
                if(st.top()->left) st2.push(st.top()->left);
                if(st.top()->right) st2.push(st.top()->right);
                temp.push_back(st.top()->val);
            }
            else
            {

                if(st.top()->right) st2.push(st.top()->right);
                if(st.top()->left) st2.push(st.top()->left);
                temp.push_back(st.top()->val);

            }
            st.pop();
        }
        flag = !flag;
        ans.push_back(temp);
        st = st2;
    }
    return ans;

}
