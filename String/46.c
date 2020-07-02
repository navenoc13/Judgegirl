#include <stdio.h>
#include <string.h>
 
char string[2<<20]="";
 
int main (){
    char cmd[20],arg[2][20];
    int n=0;
    while (scanf ("%s",cmd)!=EOF){
        int pos;
        if (!strcmp(cmd,"insert")){
            scanf ("%s%s",arg[0],arg[1]);
            if (!strcmp(arg[0],"left"))pos=0;
            else if (!strcmp(arg[0],"right"))pos=strlen(string);
            else{
                sscanf (arg[0],"%d",&pos);
                pos = pos-1;
            }
            string[n+1]='\0';
            for (int i=n-1;i>=pos;i--)
                string[i+1]=string[i];
            string[pos]=arg[1][0];
            n++;
        }
        else if (!strcmp(cmd,"delete")){
            scanf ("%s",arg[0]);
            if (!strcmp(arg[0],"right"))pos=n-1;
            else if (!strcmp(arg[0],"left"))pos=0;
            else{
                sscanf (arg[0],"%d",&pos);
                pos=pos-1;
            }
            for (int i=pos;i<n;i++)
                string[i] = string[i+1];
            n--;
        }
        //check the current string after insert and delete 
//        printf ("now = %s\n",string);
    }    
    //process the longest consecutive sequence in string[] array
    int same=1, longest=0;
    for (int i=0;i<n;i++){
        if (string[i]==string[i+1])same++;
        else{
            if (same>longest)longest = same;
            same=1;
        }
    }
    //now we know the longest, do the same thing, and print all the longest consecutive sequence chars
    for (int i=0;i<n;i++){
        if (string[i]==string[i+1])same++;
        else{
            if (same==longest)printf ("%c ",string[i]);
            same=1;
        }
    }
    printf ("%d\n",longest);
    return 0;
}
