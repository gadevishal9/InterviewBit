//
// Created by vishal gade on 9/24/18.
//

void print_parenthesis(int n,int count_l,int count_r,vector<string> &paren,string str)
{
    if(count_l == count_r && count_l == n)
    {
        paren.push_back(str);
    }
    if(count_r > count_l) return;
    if(count_l > n) return;

    print_parenthesis(n,count_l+1,count_r,paren,str+"(");

    print_parenthesis(n,count_l,count_r+1,paren,str+")");


}
vector<string> Solution::generateParenthesis(int A) {
    vector<string> paren;
    string str = "";
    print_parenthesis(A,0,0,paren,str);
    return paren;
}
