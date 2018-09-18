//
// Created by vishal gade on 9/18/18.
//

int Solution::isPalindrome(int A) {
    if(A < 0) return 0;
    int rev = 0,b=A;
    while(b)
    {
        rev = rev*10 + b%10;
        b = b/10;
    }
    if(rev == A) return 1;
    return 0;
}
