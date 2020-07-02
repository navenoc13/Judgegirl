#include <stdio.h>
int main ()
{
    int year,month,day;
    int days;
    scanf ("%d%d%d",&year,&month,&day);
    if (month<1 ||month>12 ||day<0 ||day>6){
        printf ("invalid\n");
        return 0;
    }
    switch (month){
        case 1:case 3:case 5:case 7: case 8: case 10:case 12: days=31;break;
        case 2:{
            if (year%400==0 || (year%4==0 && year%100!=0))days = 29;
            else days = 28;
            break;
        }
        case 4: case 6: case 9: case 11: days =30; break;
        default: break;
    }
    printf (" Su Mo Tu We Th Fr Sa\n");
    printf ("=====================\n");
    for (int i=1;i<=days;i++){
        if (day>6){
            printf ("\n");
            day = day%7;
        }
        if (i==1){
            for (int j =0;j<day;j++){
                printf ("   ");
            }
        }
        printf ("%3d",i);
        day++;
    }
    printf ("\n=====================\n");
 
    return 0;
}
