//
// Created by vishal gade on 9/18/18.
//

bool allocate(vector<int> &C,long long int t,int B,int A)
{
    long long int count = 0,sum=0;

    for(int i=0;i<C.size();i++)
    {
        if(C[i] > t) return false;
        sum = sum + (C[i]);
        if(sum< t) continue;
        if(sum == t)
        {
            sum = 0;count++;
        }
        else
        {
            count++;
            i--;
            sum = 0;
        }
    }
    if(sum > 0) count++;
    //cout<<count<<" "<<t<<endl;
    if(count<=A) return true;
    return false;
}
int Solution::paint(int A, int B, vector<int> &C) {
    long long int low =0,sum=0;
    for(int i=0;i<C.size();i++)
    {
        sum = sum + C[i];
    }
    long long int high =sum;
    //cout<<high<<endl;
    //cout<<"high"<<high<<endl;
    long long ans =0;
    while(low <= high)
    {
        long long int mid =(low+ high)/2;
        //cout<<mid<<endl;
        //cout<<low<<" "<<high<<" "<<mid<<endl;
        if(allocate(C,mid,B,A))
        {
            high = mid -1;
            ans = mid;
        }
        else low = mid +1;

    }

    return ans * (long long )B %10000003;

}
