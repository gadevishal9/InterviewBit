//
// Created by vishal gade on 9/24/18.
//

void subset(vector<int> &A,vector<vector<int>> &ans,vector<int> curr,int j)
{

    ans.push_back(curr);
    for(int i=j;i<A.size();i++)
    {
        curr.push_back(A[i]);
        subset(A,ans,curr,i+1);
        curr.pop_back();
    }

}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int>> ans;
    vector<int> curr;
    sort(A.begin(),A.end());
    subset(A,ans,curr,0);
    sort(ans.begin(),ans.end());
    return ans;
}
