#include <stdio.h>
 
int combination (int a,int b){
    int up = a,down =b,i,j;
    for (i=a-1;i>=a-b+1;i--)up*=i;
    for (j=b-1;j>=1;j--)down*=j;    
    return up/down;
}
 
int main ()
{
    int n,m;
    int sum=1,i;
    scanf ("%d %d",&n,&m);
    for (i=1;i<=m;i++){
        sum+=combination(n,i);
//        printf ("[%d] comb (%d,%d) = %d\n",i,n,i,combination(n,i));
    }
    printf ("%d\n",sum);
    return 0;
}
