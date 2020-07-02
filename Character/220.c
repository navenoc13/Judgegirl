#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
char s[1000000];
int main (){
    fread(s,sizeof(char),1000000,stdin);
    int n= 0;
    int l = strlen(s);    
    for (int i = 0; i < l; i++) {
       if (s[i]=='.'){
           if (s[i+1]==' ' && s[i+2] == ' ' || s[i+1]=='\n'||s[i+1]=='\0')n++;
 
       }
    }
    printf ("%d\n",n);
    return 0;
}
