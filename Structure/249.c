#include <stdio.h>
#include <string.h>
typedef struct{
  int id;
  char first_name[32];
  char last_name[32];
  int boss_id;
}Employee;
Employee mydata[32];
int boss[32];
int n,idx1,idx2,one,two;
 
void relation(char f1[],char l1[],char f2[],char l2[]){
    for(int i=0;i<n;i++){
        if(!strcmp(mydata[i].first_name,f1) && !strcmp(mydata[i].last_name,l1))idx1=i;
        if(!strcmp(mydata[i].first_name,f2) && !strcmp(mydata[i].last_name,l2))idx2=i;
    }
    one = idx1;
    while(boss[one]!=one){
        one = boss[one];
        if(one==idx2){
            printf ("subordinate\n");
            return;
        }
    }
    two = idx2;
    while(boss[two]!=two){
        two = boss[two];
        if(two==idx1){
            printf ("supervisor\n");
            return;
        }
    }
    if(one==two)printf ("colleague\n");
    else printf ("unrelated\n");
    return;
}
 
int main(){
    scanf ("%d",&n);
    for(int i=0;i<n;i++){
        scanf ("%d%s%s%d",&mydata[i].id,mydata[i].first_name,mydata[i].last_name,&mydata[i].boss_id);
    }
    //find first boss id for each employee
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(mydata[i].boss_id == mydata[j].id)boss[i]=j;
    //scan num of query
    int m;
    char f1[32],l1[32],f2[32],l2[32];
    scanf ("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%s%s%s%s",f1,l1,f2,l2);
        relation(f1,l1,f2,l2);
    }
    return 0;
}
