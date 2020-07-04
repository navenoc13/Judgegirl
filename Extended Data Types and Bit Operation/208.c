#include <stdio.h>
//Method 2
//We start printing the results after scanning all the unsigned integers
//Save the result in an array
 
int main (){
    int col,row;
    char s1,s0;
    unsigned int num;
    scanf ("%d%d",&col,&row);
    int limit = col*row;
    char print[limit];
    scanf (" %c %c",&s1,&s0);
    int index=0;
    //We scan everything and save results in char array
    while (scanf ("%u",&num)!=EOF){
        for (int i=31;i>=0;i--){
            if (num&(unsigned int)(1<<31))print[index]=s1;
            else print[index]=s0;
            index++;
            if (index==limit)break;
            num=num<<1;
        }
    }
    //Print the results from array
    int j=0;
    for (int i=0;i<limit;i++){
        if (j!=col-1){
            printf ("%c",print[i]);
            j++;
        }
        else{
            printf ("%c\n",print[i]);
            j=0;
        }
    }
    return 0;
}
