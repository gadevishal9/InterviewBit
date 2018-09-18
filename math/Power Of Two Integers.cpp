//
// Created by vishal gade on 9/18/18.
//

int Solution::isPower(int A) {
    long long int odd_pow =0,even_pow =0,power = 0;
    if(A==1) return 1;
    if(A <= 3) return 0;
    int sq = sqrt(A);
    for(long long int i = 2;i<=sq;i++)
    {
        int b = A;
        while(b%i == 0)
        {
            b = b/i;
        }
        if(b == 1) return 1;

    }
    return 0;

}
