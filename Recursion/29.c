#include <stdio.h>
 
int r,c;
int total=0;
int corner(int r,int c, int i, int j){
    if(i==r-1 && j==c-1)total++;
    if(i+1<r)corner(r,c,i+1,j);
    if(j+1<c)corner(r,c,i,j+1);
    return total;
}
 
int main (){
    scanf ("%d%d",&r,&c);
    printf ("%d\n",corner(r,c,0,0)); 
}
