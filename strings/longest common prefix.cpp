//
// Created by vishal gade on 9/28/18.
//

string longest_prefix(string str,string longest)
{
    string new_long = "";
    for(int i=0;i<longest.length();i++)
    {
        if(longest[i] == str[i]) new_long = new_long + str[i];
        else return new_long;
    }
    return new_long;
}
string Solution::longestCommonPrefix(vector<string> &A){
    if(A.size() == 1) return A[0];
    string ans = longest_prefix(A[0],A[1]);
    for(int i=2;i<A.size();i++)
    {
        ans = longest_prefix(A[i],ans);
        if(ans.length() <= 1) return ans;
    }
    return ans;
}
