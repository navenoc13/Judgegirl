#include <stdio.h>
 
int sumsquare(int n){
    if(n==1)return 1;
    else return (n*n) + sumsquare(n-1);
}
 
int main (){
    int n;
    scanf ("%d",&n);
    int total = sumsquare(n);
    printf ("%d\n",total);
}
