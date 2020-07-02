#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int main(){
    char S[150];
    int counter = 0;
    //scanf("%s", S);
    int i;
    while(fgets(S, 150, stdin) != NULL){
        int kim = strlen(S);
        for (i=kim-1;i>=0;i--)if (!isspace(S[i]))break;
        int end = i+1;
        for(i = 0; i<end; i++){
             if (isspace(S[i]) && counter == 0)
                 continue;
             else counter = 1;    
             if((counter == 1 && isspace(S[i])) || !(isspace(S[i]))) {
                 printf("%c", S[i]);
                 }
            }
        counter = 0;    
    }
    return 0;
}
