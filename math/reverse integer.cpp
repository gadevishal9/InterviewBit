//
// Created by vishal gade on 9/18/18.
//

int Solution::reverse(int b) {
    long long int rev =0,A;
    if(b < 0) A = b*(-1);
    else A = b;
    while(A>0)
    {
        rev = rev*10 + A%10;
        A = A/10;
    }
    if( rev > 2147483647) return 0;
    if(b<0) return -1* rev;
    return rev;
}
