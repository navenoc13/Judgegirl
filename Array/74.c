#include <stdio.h>
 
int main (){
    int n,i;
    scanf ("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)scanf ("%d",&arr[i]);
    int k;
    scanf ("%d",&k);
    int res[k];
    for (i=0;i<k;i++)res[i]=0;
    for (i=0;i<n;i++)res[arr[i]%k]++;
    for (i=0;i<k;i++)printf ("%d\n",res[i]);
    return 0;
}
