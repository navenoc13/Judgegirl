#include <stdio.h>
 
int main (){
    int m,n,x1,y1,e1,n1,f1,x2,y2,e2,n2,f2;
    int count=1,nope=1;
    scanf ("%d%d%d%d%d%d%d%d%d%d%d%d",&m,&n,&x1,&y1,&e1,&n1,&f1,&x2,&y2,&e2,&n2,&f2);
    int tmpe1=e1,tmpn1=n1,tmpe2=e2,tmpn2=n2;
    while(f1>0 || f2>0){
        //Robot 1
        if(f1!=0){
            //move north
            if(n1!=0){
                if(y1+1==n)y1=0;
                else y1++;
                n1--,f1--;
            }
            //move east
            else if(e1!=0){
                if(x1+1==m)x1=0;
                else x1++;
                e1--,f1--;
            }
            if(n1==0 &&e1==0){
                n1=tmpn1;
                e1=tmpe1;
            }
        }
        //Robot 2
        if(f2!=0){
            //move east
            if(e2!=0){
                if(x2+1==m)x2=0;
                else x2++;
                e2--,f2--;
            }
            //move north
            else if(n2!=0){
                if(y2+1==n)y2=0;
                else y2++;
                n2--,f2--;
            }
            if(n2==0&&e2==0){
                n2=tmpn2;
                e2=tmpe2;
            }
        }
        //check for explode
        if(x1==x2 && y1==y2){
            printf ("robots explode at time %d\n",count);
            nope=0;
            break;
        }
        count++;
    }
    if(nope)printf ("robots will not explode\n");
    return 0;
}
