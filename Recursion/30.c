#include <stdio.h>
 
int r,c,sum=0;
int arr[12][12];
int corner(int i,int j){
    if (i-1>=0 && arr[i-1][j]==1)corner(i-1,j);
    if (j+1<c && arr[i][j+1]==1)corner(i,j+1);
    if (i==0 && j == c-1)sum++;
    return sum;
}
 
int main(){
    scanf ("%d %d",&r,&c);
    for (int index1=0;index1<r;index1++)
        for (int index2=0;index2<c;index2++)
            scanf ("%d",&arr[index1][index2]);
    int k = corner (r-1,0);
    printf ("%d\n",k);
    return 0;
}
