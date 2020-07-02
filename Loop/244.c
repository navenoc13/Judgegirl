#include <stdio.h>
int main ()
{
    int first[4],special[4];
    int i, numlot;
    int total =0;
    for (i=1;i<=3;i++)
        scanf ("%d",&special[i]);
    for (i=1;i<=3;i++)
        scanf ("%d",&first[i]);
    while (scanf ("%d",&numlot)==1){
        for (i=1;i<=3;i++){
            if (special[i]==numlot)total+=2000000;
            else if (first[i]==numlot)total+=200000;
            else if (first[i]%10000000 == numlot%10000000)total+=40000;
            else if (first[i]%1000000 == numlot%1000000)total+=10000;
            else if (first[i]%100000 == numlot%100000)total+=4000;
            else if (first[i]%10000 == numlot%10000)total+=1000;
            else if (first[i]%1000 == numlot%1000)total+=200;
        }
    }
    printf ("%d",total);
    return 0;
}
