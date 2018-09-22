//
// Created by vishal gade on 9/21/18.
//

void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    if(n%2 == 0){
        for(int i =0;i<n/2;i++)
        {
            {
                for(int j =0;j<n/2;j++)
                {
                    int temp = A[j][n-1-i];
                    A[j][n-1-i] = A[i][j];
                    int m = A[n-1-i][n-1-j];
                    A[n-1-i][n-1-j] = temp;
                    temp = m;
                    m = A[n-1-j][n-1-(n-1-i)];
                    A[n-1-j][n-1-(n-1-i)] = temp;
                    temp = m;
                    A[i][j] = temp;

                }
            }
        }
    }
    else
    {
        for(int i =0;i<n/2;i++)
        {
            {
                for(int j =0;j<= n/2;j++)
                {
                    int temp = A[j][n-1-i];
                    A[j][n-1-i] = A[i][j];
                    int m = A[n-1-i][n-1-j];
                    A[n-1-i][n-1-j] = temp;
                    temp = m;
                    m = A[n-1-j][n-1-(n-1-i)];
                    A[n-1-j][n-1-(n-1-i)] = temp;
                    temp = m;
                    A[i][j] = temp;

                }
            }
        }
    }

}
