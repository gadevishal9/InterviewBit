//
// Created by vishal gade on 9/18/18.
//

int Solution::hammingDistance(const vector<int> &A) {
    long long int count1=0,count0=0,total=0;
    for(int i=1;i<33;i++)
    {
        for(int j=0;j<A.size();j++)
        {
            if (A[j] & (1 << (i-1)))
                count1++;
            else count0++;
        }
        total = total + (2*count0*count1)%1000000007;
        count0=0;count1=0;
    }
    return total%1000000007;
}
