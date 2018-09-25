//
// Created by vishal gade on 9/24/18.
//

void merge(vector<vector<int>> &ans,int k)
{
    vector<vector<int>> ans1;
    for(int i=0;i<ans.size();i++)
    {
        vector<int>temp;
        for(int j=0;j<ans[i].size();j++)
        {
            temp = ans[i];
            temp.insert(temp.begin()+j, k);
            ans1.push_back(temp);

        }
        temp = ans[i];
        temp.push_back(k);
        ans1.push_back(temp);
    }
    ans = ans1;
}
void subset(vector<int> &A,vector<vector<int>> &ans,vector<int> curr,int j)
{
    curr.push_back(A[0]);
    ans.push_back(curr);
    for(int i=1;i<A.size();i++)
    {
        merge(ans,A[i]);
    }

}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> ans;
    vector<int> curr;
    //sort(A.begin(),A.end());
    subset(A,ans,curr,0);
    sort(ans.begin(),ans.end());
    return ans;
}
