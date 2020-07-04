#include <stdio.h>
 
int main(){
    int n;
    while (scanf ("%d",&n)!=EOF){
        int sum=0;
        while (n!=0){
            if (n&1)sum++;
            n=n>>1;
        }
        printf ("%d\n",sum);
    }
    return 0;
}
