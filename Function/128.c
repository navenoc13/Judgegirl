#include"intersection.h"
void intersection(int map[100][100], int result[4]){
    int i; int j;
    int sum;
    int n;
    result [0]=0;
    result [1]=0;
    result [2]=0;
    result [3]=0;    
       for (i=0;i<100;i++){
        for (j=0;j<100;j++){
            sum =0;
            if (i+1<100 && map[i+1][j] ==1) sum++;
            if (i-1>=0 && map[i-1][j]==1) sum++;
            if (j+1<100 && map[i][j+1] ==1) sum++;
            if (j-1>=0 && map[i][j-1] ==1) sum++;
 
            if (sum==4){
                if (map[i][j]==1)
                   result[0]++;
            }
            if (sum==3){
                if (map[i][j]==1){
                       result[1]++;
                    }
            }
            if (sum==2){
                if (map[i][j]==1){
                    if (map[i-1][j]==1 && i-1>=0 && map[i+1][j]!=1){
                        result[2]++;
                    }
                    else if (map[i+1][j]==1 && i+1<100 && map[i-1][j]!=1){
                       result[2]++;
                    }
                    else if (map[i][j+1]==1 && j+1<100 && map[i][j-1]!=1){
                        result[2]++;
                    }
                    else if (map[i][j-1]==1 && j-1>=0 && map[i][j+1]!=1){
                        result[2]++;
                    }
                }
            }
            if (sum==1){
                if (map[i][j]==1){
                    result[3]++;
                    }
                }
            }
        }
        return;
}
