//
// Created by vishal gade on 9/18/18.
//

vector<int> Solution::primesum(int A) {
    vector<bool> arr(A+2,true);
    arr[0] = false;
    arr[1] =false;
    int i = 2;
    while(i<sqrt(A))
    {
        if(arr[i])
        {
            int j = i;
            while(j*i <= A)
            {
                arr[i*j] = false;
                j++;
            }
        }
        i++;
    }
    i = 2;
    for(int i=2;i<=A;i++)
    {
        if(arr[i]  && arr[A-i])
        {
            vector<int> prime;
            prime.push_back(i);
            prime.push_back(A-i);
            return prime;
        }
    }
}
