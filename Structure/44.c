#include "book.h"
#include "date.h"
int leapyear(int year){
    if (year%400==0 || (year%4==0 && year%100!=0))return 1;
    else return 0;
}
 
int countleapyear(struct Date d){
    int year = d.year;
    year--;
    return year/4 - year/100 + year/400;
}
 
int checkdistance (unsigned int n){
    int distance=0;
    int numofone=0;
    while (numofone!=2){
        if (n%2==1)numofone++;
        if (numofone==1 && n%2==0)distance++;
        n = n>>1;
    }
    return distance;
}
 
unsigned int library_fine(struct Book book, struct Date date_borrowed, struct Date date_returned){
    int dayspermonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    //counting n1
    int n1 = date_borrowed.year*365 + date_borrowed.day;
    if (leapyear(date_borrowed.year))dayspermonth[1]=29;
    else dayspermonth[1]=28;
    for (int i=0;i<date_borrowed.month-1;i++)
        n1+=dayspermonth[i];
    n1+=countleapyear(date_borrowed);
    //counting n2
    int n2 = date_returned.year*365 + date_returned.day;
    if (leapyear(date_returned.year))dayspermonth[1]=29;
    else dayspermonth[1]=28;
    for (int i=0;i<date_returned.month-1;i++)
        n2+=dayspermonth[i];
    n2+=countleapyear(date_returned);
    //num of days(howlong)
    int howlong = n2-n1+1;
    int overdue;
//    printf ("%d\n",howlong);
    if (book.type==0){
        if (howlong>90)overdue = howlong-90;
        else return 0;
    }
    else if (book.type==1){
        if (howlong>10)overdue = howlong-10;
        else return 0;
    }
    else if (book.type==2){
        if (howlong>100)overdue = howlong-100;
        else return 0;
    }
    else if (book.type==3){
        if (howlong>5)overdue = howlong-5;
        else return 0;
    }
    int importance = checkdistance(book.importance);
    return importance * overdue;
}
