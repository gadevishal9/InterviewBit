//
// Created by vishal gade on 9/18/18.
//

unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int num =0;
    for(int i=0;i<32;i++)
    {
        if(A & 1) num = num + (1<<(31-i));
        A = A>>1;
    }
    return num;


}
