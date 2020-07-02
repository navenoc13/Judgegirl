#include <stdio.h>
#include <string.h>

int main (){
    char main[128]="";
    char in[128];
    int i;
    while (scanf ("%s",in)!=EOF){
        int l=strlen(main);
        for(i=0;i<l;i++){
            if(strncmp(&main[i],in,l-i)==0)break;
        }
        strcpy(&(main[i]),in);
    }
    printf ("%s\n",main);
}
