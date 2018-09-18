//
// Created by vishal gade on 9/18/18.
//

int Solution::trailingZeroes(int A) {
    int count =0,curr =0,i=1;
    while(true)
    {
        count = count + A/(pow(5,i++));
        if(A/pow(5,i) == 0) break;
    }
    return count;
}
