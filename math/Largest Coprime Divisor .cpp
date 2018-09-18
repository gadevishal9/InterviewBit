//
// Created by vishal gade on 9/18/18.
//

int gcd(int A,int B)
{
    if(A < B)
    {
        int k = A;
        A=B;
        B = k;
    }
    //if(B==0) return 0;
    if(B<=1) return B;
    if(A%B == 0 ) return B;
    return gcd(B,A%B);
}
int Solution::cpFact(int A, int B) {
    if(gcd(A,B) == 1) return A;
    else
    {
        A = A/gcd(A,B);
        return cpFact(A,B);
    }
}
