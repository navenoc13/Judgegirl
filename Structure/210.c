#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct{
    char lastname[81];
    char firstname[81];
    char id[81];
    int salary;
    int age;
}Database;
Database mydata[50];
char toprint[10][20];
int n,idx;
 
int changeint(char s[]){
    int n=0;
    for(int i=0;s[i];i++){
        n = n*10 + (s[i]-'0');
    }
    return n;
}
 
void print(int index){
    for(int i=0;i<idx;i++){
        if(toprint[i][0]=='s')printf ("%d ",mydata[index].salary);
        else if(toprint[i][0]=='a')printf ("%d ",mydata[index].age);
        else if(toprint[i][0]=='I')printf ("%s ",mydata[index].id);
        else if(toprint[i][0]=='l')printf ("%s ",mydata[index].lastname);
        else if(toprint[i][0]=='f')printf ("%s ",mydata[index].firstname);
    }
    printf ("\n");
}
 
void processint(char field[],char cmp[],int num){
    //salary
    if(field[0]=='s'){
        if(cmp[0]=='='){
            for(int i=0;i<n;i++){
                if(mydata[i].salary==num)print(i);
            }
        }
        else if(cmp[0]=='>'){
            for(int i=0;i<n;i++){
                if(mydata[i].salary>num)print(i);
            }
        }
        else if(cmp[0]=='<'){
            for(int i=0;i<n;i++){
                if(mydata[i].salary<num)print(i);
            }
        }
    }
    //age
    else if (field[0]=='a'){
        if(cmp[0]=='='){
            for(int i=0;i<n;i++){
                if(mydata[i].age==num)print(i);
            }
        }
        else if(cmp[0]=='>'){
            for(int i=0;i<n;i++){
                if(mydata[i].age>num)print(i);
            }
        }
        else if(cmp[0]=='<'){
            for(int i=0;i<n;i++){
                if(mydata[i].age<num)print(i);
            }
        }
    }
}
void process_string(char field[],char cmp[],char s[]){
    //firstname
    if(field[0]=='f'){
        if(cmp[0]=='='){
            for(int i=0;i<n;i++){
                if(!strcmp(mydata[i].firstname,s))print(i);
            }
        }
        else if(cmp[0]=='!'){
            for(int i=0;i<n;i++){
                if(strcmp(mydata[i].firstname,s)!=0)print(i);
            }
        }
    }
    //lastname
    else if (field[0]=='l'){
        if(cmp[0]=='='){
            for(int i=0;i<n;i++){
                if(!strcmp(mydata[i].lastname,s))print(i);
            }
        }
        else if(cmp[0]=='!'){
            for(int i=0;i<n;i++){
                if(strcmp(mydata[i].lastname,s)!=0)print(i);
            }
        }
    }
    //ID
    else if (field[0]=='I'){
        if(cmp[0]=='='){
            for(int i=0;i<n;i++){
                if(!strcmp(mydata[i].id,s))print(i);
            }
        }
        else if(cmp[0]=='!'){
            for(int i=0;i<n;i++){
                if(strcmp(mydata[i].id,s)!=0)print(i);
            }
        }
    }
}
 
int main (){
    //SCAN DATA
    scanf ("%d",&n);
    for (int i=0;i<n;i++){
        scanf ("%s",mydata[i].lastname);
        scanf ("%s",mydata[i].firstname);
        scanf ("%s",mydata[i].id);
        scanf ("%d",&mydata[i].salary);
        scanf ("%d",&mydata[i].age);
    }
    //SCAN QUERY
    int m;
    scanf ("%d",&m);
    for (int j=0;j<m;j++){
        //ignore the "select" (first input)
        scanf ("%*s");
        idx=0;
        while(~scanf ("%s",toprint[idx]) && toprint[idx][0]!='w'){
            idx++;
        }
        char field[10],cmp[5],s[80];
        //from 0 to idx-1 (to print)
        scanf ("%s%s%s",field,cmp,s);
        //two possibilities (process integer or string)
        //first integer
        if(field[0]=='s' || field[0]=='a'){
            int num = changeint(s);
            processint(field,cmp,num);
        }
        else{
            process_string(field,cmp,s);
        }
    }
    return 0;
}
