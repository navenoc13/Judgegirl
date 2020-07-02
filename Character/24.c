#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main (){
    char s[100];
    scanf ("%s",s);
    int d=0,l=0,v=0,c=0;
    int len =strlen (s);
    for (int i=0;i<len;i++){
        if (isalpha(s[i])){
            l++;
            if (s[i] == 'A' || s[i] == 'I' ||  s[i] == 'U' || s[i] == 'E' ||  s[i] == 'O' ||  s[i] == 'a' ||  s[i] == 'i' ||  s[i] == 'u' ||  s[i] == 'e' ||  s[i] == 'o')v++;
            else c++;
        }
        else if (isdigit(s[i]))d++;
    }
    printf ("%d %d %d %d\n",d,l,v,c);
    return 0;
}
