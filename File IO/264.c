#include <stdio.h>
 
#define MAX 65536
int main (){
    int count[MAX]={0};
    //output maxnum, and maxcount
    int n,maxcount=-1,maxnum=-1;
    short signed num;
    char filename[200];
    scanf ("%s",filename);
 
    FILE *fp;
 
    fp = fopen (filename,"rb");
    //scan n
    fread(&n,4,1,fp);
    for(int i=0;i<n;i++){
        fread(&num,2,1,fp);
        count[num+32768]++;
        if(count[num+32768]>maxcount || count[num+32768]==maxcount && num+32768>maxnum){
            maxnum = num + 32768;
            maxcount = count[num+32768];
        }
    }
    printf ("%d\n%d\n",maxnum-32768,maxcount);
    return 0;
}
