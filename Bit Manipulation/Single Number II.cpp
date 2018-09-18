//
// Created by vishal gade on 9/18/18.
//

int Solution::singleNumber(const vector<int> &A) {
    int num =0,x_1=0;
    for(int i=0;i<32;i++)
    {
        for(int j=0;j<A.size();j++)
        {
            if(A[j] & 1<<i) x_1++;

        }
        if(x_1 % 3 == 1)num= num + (1<<i);
        x_1 =0;
    }
    return num;
}
