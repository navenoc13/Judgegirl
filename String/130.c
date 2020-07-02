#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main (){
    int n;
    scanf ("%d",&n);
    char s1[81],s2[81];
    for (int i=0;i<n;i++){
        scanf ("%s",s1);
        scanf ("%s",s2);
        //for same length
        if (strlen(s1)==strlen(s2)){
            //two strings equal
            if(strcmp(s1,s2)==0)printf ("yes\n");
            //switch one char
            else{
                int sum=0,id;
                for(int j=0;j<strlen(s1);j++){
                    if(s1[j]==s2[j])sum++;
                    else id=j;
                }
                if((sum==strlen(s1)-2) &&s1[id]==s2[id-1] && s2[id]==s1[id-1])printf ("yes\n");
                else printf ("no\n");
            }
        }
        //different strlen (deleting one char)
        else if(strlen(s1)-strlen(s2)==1 || strlen(s2)-strlen(s1)==1){
            int sum=0,f=0;
            //s1 is longer
            if(strlen(s1)>strlen(s2)){
                for(int j=0,k=0;j<strlen(s1),k<strlen(s2);){
                    if(s1[j]!=s2[k] && f==0){
                        j++,f=1;
                    }
                    if(s1[j]==s2[k]){
                        j++,k++,sum++;
                    }
                    else if (f==1)j++,k++;
                }
                if(sum==strlen(s2))printf ("yes\n");
                else printf ("no\n");
            }
            //s2 is longer
            else{
                for(int j=0,k=0;j<strlen(s1),k<strlen(s2);){
                    if(s1[j]!=s2[k] && f==0){
                        k++,f=1;
                    }
                    if(s1[j]==s2[k]){
                        j++,k++,sum++;
                    }
                    else if (f==1)j++,k++;
                }
                if(sum==strlen(s1))printf ("yes\n");
                else printf ("no\n");
            }
        }
        else printf ("no\n");
    }
    return 0;
}
