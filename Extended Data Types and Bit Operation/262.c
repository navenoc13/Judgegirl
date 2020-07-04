#include <stdio.h>
 
int consecutive(int n){
    int c=0;
    while (n!=0){
        n = (n& (n<<1));
        c++;
    }
    return c;
}
 
int main (){
    int n;
    while (scanf ("%d",&n)!=EOF){
        printf ("%d\n",consecutive(n));
    }
    return 0;
}
