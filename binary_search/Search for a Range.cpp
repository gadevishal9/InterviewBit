//
// Created by vishal gade on 9/18/18.
//

int binary_search(const vector<int> &A, int B,int low,int high)
{
    if(low <= high)
    {
        int mid = (low +high)/2;
        if(A[mid] == B) return mid;
        else if (A[mid] > B) high = mid-1;
        else low = mid +1;
        return binary_search(A,B,low,high);
    }

    return -1;
}


vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> ans;
    int low = 0,high = A.size()-1,result =-1,mid;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(A[mid] < B) low = mid +1;
        else if(A[mid] == B)
        {
            high = mid -1;
            result = mid;
        }
        else high = mid-1;

    }

    ans.push_back(result);

    low = 0,high = A.size()-1,result =-1;
    while(low <= high)
    {

        mid = (low + high)/2;
        if(A[mid] < B) low = mid +1;
        else if(A[mid] == B)
        {
            low = mid +1;
            result = mid;
        }
        else high = mid-1;
    }
    ans.push_back(result);
    return ans;

}
