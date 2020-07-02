#include <stdio.h>
 
int main (){
    int n,m;
    scanf ("%d%d",&n,&m);
    int tmp,count=0;
    while (m!=0){
        tmp = m%100;
        if(tmp==n)count++;
        m = m/10;
    }
    printf ("%d\n",count);
    return 0;
}
