//
// Created by vishal gade on 9/27/18.
//

int Solution::strStr(const string A, const string B) {
    int i=0,j=0,index = -1;
    string match = "";
    while(i<A.length())
    {
        if(A[i] == B[j])
        {
            if(match.length() == 0)
                index =i;
            match = match + A[i++];
            j++;
            if(j == B.length()) return index;
        }
        else
        {
            if(match.length() >0)
            {
                j = 0;i = i-match.length()+1;
                match ="";

            }
            else i++;

        }
    }

    return -1;
}
