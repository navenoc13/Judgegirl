#include <stdio.h>
#include <string.h>
 
//Divisible
 
int ti(char c){
    return c - '0';
}
 
int main (){
    char s[1000];
    int index=0;
    while (scanf ("%s",s)!=EOF){
        int even=0,odd=0;
        if (!strcmp(s,"-1"))return 0;
        int l = strlen(s);
        for (int i=0;i<l;i++){
            if (i%2==0)odd+=ti(s[i]);
            else even+=ti(s[i]);
        }
        printf ("%s ",(ti(s[l-1])%2==0)?"yes":"no");
        printf ("%s ",((even+odd)%3==0)?"yes":"no");
        printf ("%s ",(ti(s[l-1])==0 || ti(s[l-1])==5)?"yes":"no");
        printf ("%s\n",((even-odd)%11==0)?"yes":"no");
    }
    return 0;
}
