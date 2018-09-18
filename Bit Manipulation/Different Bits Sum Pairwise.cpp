//
// Created by vishal gade on 9/18/18.
//

int Solution::cntBits(vector<int> &A) {
    long long int count =0,x_1 =0,x_0 = 0;
    for(int i=0;i<32;i++)
    {
        for(int j=0;j<A.size();j++)
        {
            if(A[j] & 1<<i) x_1++;
            else x_0++;
        }
        count = count + x_0*x_1;
        x_0=0;x_1=0;
    }
    return count*2 % 1000000007;
}
