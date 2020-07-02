#include <stdio.h>

int main (){
    int n;
    scanf ("%d",&n);
    int a[n],i;
    for (i=0;i<n;i++)scanf ("%d",&a[i]);
    for (i=n-1;i>=0;i--){
        printf ("%d",a[i]);
        if (i==0)printf ("\n");
        else printf (" ");
    }
    return 0;
}
