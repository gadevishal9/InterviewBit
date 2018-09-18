//
// Created by vishal gade on 9/18/18.
//

string Solution::convertToTitle(int A) {
    string title = "";
    while(A)
    {
        int rem = A%26;
        if(rem >0)
            title =  (char)( 'A' + A%26 -1) + title;
        else
        {
            title = 'Z' + title;
            A--;
        }

        A= A/26;
    }
    return title;
}
