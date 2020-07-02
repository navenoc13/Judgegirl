#include <stdio.h>
 
int main (){
    int n,num;
    int s1=0,s2=0,s3=0;
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%d",&num);
        if (num%3==0)s1++;
        else if (num%3==1)s2++;
        else if (num%3==2)s3++;
    }
    printf ("%d %d %d\n",s1,s2,s3);
    return 0;
}
