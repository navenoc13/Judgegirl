#include <stdio.h>
#include <stdlib.h>
 
#define MAX 65536
int main() {
    FILE *fin = fopen("test","rb");
    FILE *fout = fopen("test.enc","wb");
    int key,size;
    char str[MAX];
    scanf ("%d",&key);
    while((size = fread(str,1,MAX,fin))!=0){
        for(int i=0;i<size;i++)
            str[i] = str[i] ^ key;
        fwrite(str,sizeof(char),size,fout);
    }
    fclose(fin);
    fclose(fout);
}
