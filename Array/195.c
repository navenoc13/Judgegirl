#include <stdio.h>
 
int main(){
    int board[3][3];
    int x,y,n;
    int i,j,k;
    int turn;//1 is black, 2 is white
    int wins = -1;
 
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            board[i][j] = 0;
 
    scanf("%d",&n);
    turn = 1;
 
    for(i = 0; i < n && wins == -1; i++){
        scanf("%d%d",&x,&y);
        if(x >= 0 && x <= 2 && y >= 0 && y <= 2 && board[x][y] == 0){
            board[x][y] = turn;
 
            //check wether there is win
            for(j = 0; j < 3; j++){
                if(board[j][0] == board[j][1] && board[j][1] == board[j][2] && board[j][0] != 0) wins = board[j][0];
                if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != 0) wins = board[0][j];
            }
            if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != 0) wins = board[0][0];
            if(board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != 0) wins = board[2][0];    
 
            /*//print board
            for(j = 0; j < 3; j++){
                for(k = 0; k < 3; k++)
                    printf("%d ",board[j][k]);
                printf("\n");
            }
            printf("\n");*/
 
            //change turn
            if(turn == 1) turn = 2;
            else turn = 1;
        }
    }
    if(wins == 0 || wins == -1) printf("There is a draw.\n");
    else if(wins == 1) printf("Black wins.\n");
    else printf("White wins.\n");
    return 0;
}
