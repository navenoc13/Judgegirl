#include <stdio.h>

int main (){
    int a,b;
    scanf ("%d%d",&a,&b);
    int lasta,lastb,n=0,m=0,temp;
    for (int i = 0;i<4;i++){
        lasta = a %10;
        temp = b;
        for (int j=0;j<4;j++){
            lastb = temp%10;
            if (lasta == lastb){
                if (i==j)m++;
                else n++;
            }
            temp=temp/10;
        }
        a = a/10;
    }
    printf ("%dA%dB\n",m,n);
    return 0;
}
