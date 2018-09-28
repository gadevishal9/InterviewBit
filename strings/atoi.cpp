//
// Created by vishal gade on 9/28/18.
//

int Solution::atoi(const string A) {

    bool neg = false;
    long long int i = 0,num = 0;
    while(A[i] == ' ')
        i++;
    if(A[i] == '-'){i++; neg = true;}
    else if(A[i] == '+') {i++;neg = false;}

    if(!(A[i] - '0' >=0 && A[i] -'0' <=9 )) return 0;

    while(A[i] - '0' >=0 && A[i] -'0' <=9 )
    {
        num = num*10 + A[i++]-'0';
        if(num >= INT_MAX) break;
    }
    if(num > INT_MAX)
    {
        if(neg) return INT_MIN;
        else return INT_MAX;
    }
    if(neg) return -1*num;
    return num;

}
