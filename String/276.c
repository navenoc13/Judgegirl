#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main (){
    char s[128];
    while (scanf ("%s",s)!=EOF){
        if (strcmp(s,"of")!=0 && strcmp(s,"and")!=0 && strcmp(s,"the")!=0 && strcmp(s,"at.")!=0 && strcmp(s,"of.")!=0 && strcmp(s,"and.")!=0 && strcmp(s,"the.")!=0 && strcmp(s,"at")!=0){
            printf ("%c",toupper(s[0]));
        }
        if (s[strlen(s)-1]== '.'){
            printf ("\n");
        }
    }
}
