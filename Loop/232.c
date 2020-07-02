#include <stdio.h>
 
int main (){
    int year,day,i,j;
    int n,month,date;
    int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf ("%d%d",&year,&day);
    if (year%400==0 || (year%4==0 &&year%100!=0))days[2]++;
    scanf ("%d",&n);
    for (i=0;i<n;i++){
        scanf ("%d %d",&month,&date);
        //invalid month
        if (month<1 || month>12)printf ("-1\n");
        //invalid date
        else if (date<1 || date>days[month])printf ("-2\n");
        //month and date valid, proceed process
        else{
            for (j=1;j<month;j++)date+=days[j];
            date+=day-1;
            printf ("%d\n",date%7);
        }
    }
    return 0;
}
