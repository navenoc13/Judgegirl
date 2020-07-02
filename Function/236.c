#include <stdio.h>
 
//we need GCF for LCM formula
int gcf(int x,int y){
    while(x%y!=0){
        int k = x%y;
        x = y;
        y = k;
    }
    return y;
}
 
int lcm(int x,int y){
    int fpb = gcf(x,y);
    return x*y/fpb;
}
 
int main (){
    int n,c=0;
    int kpk;
    while(scanf ("%d",&n)!=EOF){
        if(c==0){
            kpk = n;
        }
        else{
            kpk = lcm(kpk,n);
        }
        c++;
    }
    printf ("%d\n",kpk);
    return 0;
}
