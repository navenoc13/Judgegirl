#include <stdio.h>
 
int main (){
    int n,k;
    scanf ("%d %d",&n,&k);
    int num = 1;
    for (int i=1;i<=k;i++)num=num*n;
    printf ("%d\n",num);
}
