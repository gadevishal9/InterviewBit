//
// Created by vishal gade on 9/23/18.
//

/*The following program  given an year,  calculates the number of palindorme dates in that century in month/date/year format of 6-digit, 7 digit and 8 digit numbers
*/

#include <iostream>
using namespace std;
int reverse(int n)
{
    int rev = 0;
    while(n)
    {
        rev = rev* 10 + (n%10);
        n = n/10;
    }
    return rev;
}
int send_date(int n)
{
    if(n>=100) {
        int date = 0;
        date = n % 10;
        n = n / 10;
        date = (n % 10) * 10 + date;
        return date;
    }
    return n%10;
}
int send_month(int n)
{
    if(n>=100)
        return n/100;
    else return n/10;
}
int calculate_palin(int date,int month,int year)
{
    if(date == 0) return 0;
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if(date <=31) return 1;
    }
    if(month == 4|| month == 6|| month == 9 || month == 11)
    {
        if(date<=30) return 1;
    }
    if(month == 2)
    {
        if(date<=28) return 1;
        if(date == 29 && year%4 == 0) return 1;
    }
    return 0;
}
int main() {
    int year =2223; //cin>>year;
    int count = 0;
    int x = (year/100)*100,y = x+100;
    for(int i = x; i<= y;i++)
    {

        int rev = reverse(i);

        if(rev > 100)
        {

            int date,month;
            date = send_date(rev);
            month = send_month(rev);
            int cal = calculate_palin(date,month,i);
            if(cal == 1) cout<<month<<" "<<date<<" "<<i<<endl;
            count = count + cal;

            date = send_date(rev / 10);
            month = send_month(rev / 10);
            cal = calculate_palin(date,month,i);

            count = count + cal;
            if(rev>=1000)
            {
                date = send_date(rev / 100);
                month = send_month(rev / 100);
                cal = calculate_palin(date,month,i);
                
                count = count + cal;
            }




        }
    }
    cout<<count<<endl;


    return 0;
}