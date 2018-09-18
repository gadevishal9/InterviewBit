//
// Created by vishal gade on 9/18/18.
//

int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int min = INT_MAX;
    for(int i=0;i<A.size()-1;i++)
    {
        if((A[i] ^ A[i+1]) < min) min = (A[i] ^ A[i+1]);
    }
    return min;
}
