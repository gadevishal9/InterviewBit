//
// Created by vishal gade on 9/18/18.
//

int allocate(int n,vector<int> &A,int B)
{
    int sum =0,count =0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i] > n) return B+1;
        sum = sum + A[i];
        if(sum > n)
        {
            count++;
            i--;
            //cout<<A[i]<<" 1 "<<sum-A[i+1]<<" "<<count<<endl;
            sum =0;

        }
        else if(sum == n)
        {
            //cout<<A[i]<<" 2 "<<sum<<" "<<count<<endl;
            count++;sum =0;

        }

    }
    if(sum > 0) count++;
    return max(count,B);
}

int Solution::books(vector<int> &A, int B) {
    int sum1 = 0;
    for(int i=0;i<A.size();i++)
    {
        sum1 = sum1 + A[i];
    }
    if(A.size() < B) return -1;

    int low =0,high = sum1,ans=0;
    while(low<=high)
    {
        int mid = (low+high)/2;
        //cout<<mid<<" "<<allocate(mid,A,B)<<" "<<low<<" "<<high<<endl;
        if(allocate(mid,A,B) > B)
        {
            low = mid+1;
        }
        else if (allocate(mid,A,B) < B)
        {
            high = mid-1;
        }
        else
        {
            high = mid-1;
            ans = mid;
            //cout<<ans<<endl;
        }
        //cout<<mid<<" "<<allocate(mid,A,B)<<endl;
    }
    return ans;
    //return allocate(97,A,B);

}
