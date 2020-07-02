#include <stdio.h>
 
int main (){
    int n;
    scanf ("%d",&n);
    int array[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf ("%d",&array[i][j]);
            
    //process the array,calculate count
    int inter=0,T=0,turn=0,dead=0;
    int up,down,left,right;
    int count;;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            up=0,down=0,left=0,right=0,count=0;
            //check available neighbour
            if(i+1<n)down=1;
            if(i-1>=0)up=1;
            if(j+1<n)right=1;
            if(j-1>=0)left=1;
            //if it is one
            if(array[i][j]==1){
                if(down && array[i+1][j]==1)count++;
                if(up && array[i-1][j]==1)count++;
                if(right && array[i][j+1]==1)count++;
                if(left && array[i][j-1]==1)count++;
                if(count==4)inter++;
                else if(count==3)T++;
                else if(count==2){
                    if(array[i-1][j]==1 && array[i][j-1]==1 && up && left || array[i-1][j]==1 && array[i][j+1]==1 && up && right || array[i+1][j]==1 && array[i][j-1]==1 &&down &&left|| array[i+1][j]==1 && array[i][j+1]==1 && down && right)turn++;
                }
                else if(count==1)dead++;
            }
        }
    }
    printf ("%d\n%d\n%d\n%d\n",inter,T,turn,dead);
    return 0;
}
