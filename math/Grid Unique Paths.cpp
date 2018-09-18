//
// Created by vishal gade on 9/18/18.
//

int Solution::uniquePaths(int A, int B) {
    int arr[A+1][B+1],i=0,j=0;
    for(i=0;i<=A;i++)
    {
        for(j=0;j<=B;j++)
        {
            if(i==0 || j==0) arr[i][j] =0;
            else if(i==1 && j==1) arr[i][j] =1;
            else
            {
                arr[i][j] = arr[i-1][j]+ arr[i][j-1];
            }

        }
    }
    return arr[A][B];
}
