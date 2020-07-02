#include <stdio.h>
 
//204. House of Mirror
int main (){
    int w,d,i,j;
    scanf ("%d %d",&w,&d);
    int grid[d+2][w+2];
    grid[0][w+1] = -2;
    grid[d+1][0] = -2;
    grid[d+1][w+1] = -2;
    grid[0][0] = -2;
 
    //initialize the index in the grid array
    int index = 0;
    //Bottom Index
    for (i=1;i<=w;i++){
        grid[d+1][i] = index;
        index++;
    }
    //Right Index
    for (i=d;i>=1;i--){
        grid[i][w+1] = index;
        index++;
    }
    //Top Index
    for (i=w;i>=1;i--){
        grid[0][i] = index;
        index++;
    }
    //Left Index
    for (i=1;i<=d;i++){
        grid[i][0] = index;
        index++;
    }
 
    //scan the mirror grid
    for (i=1;i<=d;i++){
        for (j=1;j<=w;j++){
            scanf ("%d",&grid[i][j]);
        }
    }
 
    int x,y,xdir,ydir;
    //Traverse Bottom
    for (i=1;i<=w;i++){
        x = i;
        y = d;
        xdir = 0,ydir = -1; //initially go up
        while (x<=w && y>0){
            if (grid[y][x]==1){
                xdir = xdir == 0? 1:0;
                ydir = ydir == -1? 0:-1;
            }
            x+=xdir;
            y+=ydir;
        }
        printf ("%d\n",grid[y][x]);
    }
    //Traverse Right
    for (i=d;i>=1;i--){
        x = w;
        y = i;
        xdir = -1,ydir = 0; //initially go left
        while (x>=1 && y<=d){
            if (grid[y][x]==1){
                xdir = xdir == -1? 0:-1;
                ydir = ydir == 0? 1:0;
            }
            x+=xdir;
            y+=ydir;
        }
        printf ("%d\n",grid[y][x]);
    }
    //Traverse Top
    for (i=w;i>=1;i--){
        x = i;
        y = 1;
        xdir = 0,ydir = 1; //initially go down
        while (y<=d && x>=1){
            if (grid[y][x]==1){
                xdir = xdir == 0? -1:0;
                ydir = ydir == 1? 0:1;
            }
            x+=xdir;
            y+=ydir;
        }
        printf ("%d\n",grid[y][x]);
    }
    //Traverse Left
    for (i=1;i<=d;i++){
        x = 1;
        y = i;
        xdir = 1,ydir = 0; //initially go left
        while (x<=w && y>0){
            if (grid[y][x]==1){
                xdir = xdir == 1? 0:1;
                ydir = ydir == 0? -1:0;
            }
            x+=xdir;
            y+=ydir;
        }
        printf ("%d\n",grid[y][x]);
    }
 
    /*Check the grid    
    for (i=0;i<d+2;i++){
        for (j=0;j<w+2;j++){
            printf ("%d ",grid[i][j]);
            if (j==w+1)printf ("\n");
        }
    }*/
    return 0;
}
