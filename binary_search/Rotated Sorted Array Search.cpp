//
// Created by vishal gade on 9/18/18.
//

int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    //cout<<pivot<<" "<<A[pivot]<<endl;
    //return 0;
    //int rem = A.size() -pivot;
    //cout<<rem<<endl;
    int low =0,high = A.size()-1;
    while(low < high)
    {
        int mid = (low + high) >> 1;
        if(A[mid] > A[high]) low = mid +1;
        else high = mid;
    }
    //cout<<low<<endl;

    int low1 =0,low2=low,high1 = low2-1,high2 = A.size()-1;
    //cout<<low2<<" "<<endl;
    while(low1 <= high1 || low2<=high2)
    {
        int mid1 = (low1 + high1)/2;
        int mid2 = (low2 + high2)/2;
        if(low1<=high1){
            if(A[mid1] < B)low1 = mid1 +1;
            else if(A[mid1] > B) high1 = mid1-1;
            else return mid1;}
        if(low2<=high2){

            if(A[mid2] < B)low2 = mid2 +1;
            else if(A[mid2] > B) high2 = mid2-1;
            else return mid2;
        }

    }
    return -1;

}
