//
// Created by vishal gade on 9/18/18.
//

int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int result=0;
    if(A== 1 || A==0) return A;
    long long int low =1,high = A/2,mid;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(mid*mid  == A) return mid;
        else  if(mid*mid < A)
        {
            //cout<<result<<endl;
            result = mid;
            low = mid+1;
        }
        else high = mid -1;
    }
    //cout<<result<<" "<<21321<<endl;
    return result;

}
