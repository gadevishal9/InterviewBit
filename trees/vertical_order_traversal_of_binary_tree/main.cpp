void traverse(TreeNode* root,map<TreeNode*,int> &dis,int distance)
{
    if(root == NULL) return;
    dis[root] = distance;
    traverse(root->left,dis,distance -1);
    traverse(root->right,dis,distance+1);
}

vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    map<TreeNode*,int> dis;
    queue<TreeNode*> q;
    q.push(A);
    vector<vector<int>>ans;
    if(A == NULL) return ans;
    map<int,vector<int>> hash;

    int distance =0;
    traverse(A,dis,distance);
    while(!q.empty())
    {
        queue<TreeNode*> q2;
        while(!q.empty())
        {
            if(q.front()->left != NULL)
            {
                q2.push(q.front()->left);
            }
            if(q.front()->right != NULL)
            {
                q2.push(q.front()->right);
            }


            hash[dis[q.front()]].push_back(q.front()->val);
            q.pop();
        }
        q = q2;
        queue<TreeNode*> q3;
        q2 = q3;
    }
    for(auto it = hash.begin();it!=hash.end();++it)
    {
        ans.push_back(it->second);
    }
    return ans;

