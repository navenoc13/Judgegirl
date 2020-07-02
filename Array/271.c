#include <stdio.h>
 
//Multiply Polynomial
 
int main ()
{
    int n,m,i,j;
    //scan size polynomial1
    scanf ("%d",&n);
    int n1[n];
    //scan coef of polynomial1 
    for (i=0;i<n;i++)
        scanf ("%d",&n1[i]);
    //scan size polynomial2    
    scanf ("%d",&m);
    int n2[m];
    //scan coef of polynomial2
    for (j=0;j<m;j++)
        scanf ("%d",&n2[j]);
    //initialize the size of sum    
    int sum[n+m-1];
    //initialize sum to 0
    for (i=0;i<n+m-1;i++)sum[i]=0;
    //process the sum
    for (i=0;i<n;i++)
        for (j=0;j<m;j++)
            sum[i+j] += (n1[i] * n2[j]);
    //print result of multiplication
     for (i=0;i<=m+n-2;i++)
        printf ("%d%c",sum[i]," \n"[i==m+n-2]);
    return 0;
}
