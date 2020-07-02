#include <stdio.h>
 
int main (){
    int r,c;
    scanf ("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf ("%d",&arr[i][j]);
    int neighbour=0,higher=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            neighbour=0,higher=0;
            if(i+1<r)neighbour++;
            if(i-1>=0)neighbour++;
            if(j+1<c)neighbour++;
            if(j-1>=0)neighbour++;
 
            if(i+1<r && arr[i][j]>arr[i+1][j])higher++;
            if(i-1>=0 && arr[i][j]>arr[i-1][j])higher++;
            if(j+1<c && arr[i][j]>arr[i][j+1])higher++;
            if(j-1>=0 && arr[i][j]>arr[i][j-1])higher++;
 
            if(neighbour==higher)printf ("%d\n",arr[i][j]);
#ifdef DEBUG
            printf ("%d %d neighbour = %d higher = %d\n",i,j,neighbour,higher);
#endif
        }
    }
    return 0;
}
