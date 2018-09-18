//
// Created by vishal gade on 9/18/18.
//

int Solution::gcd(int A, int B) {
    if(A ==0 || B== 0) return max(A,B);
    if(A == 1 || B == 1) return 1;
    if(max(A,B)% min(A,B) == 0) return min(A,B);
    else return gcd(max(A,B)% min(A,B),min(A,B));
}
