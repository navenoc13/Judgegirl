#include <stdio.h>
#include <string.h>
 
int main(){
    char s[100];
    scanf ("%s",s);
    for(int i=97;i<123;i++){
        int sum=0;
        for(int c=0;c<strlen(s);c++){
            if(s[c]==i || s[c]==(i-32))sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
