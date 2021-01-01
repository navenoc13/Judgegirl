#include <stdio.h>
#include <string.h>
struct person {
    unsigned int id;
    char name[32];
};
typedef struct person Person;
 
struct friends {
    unsigned id1;
    unsigned id2;
};
typedef struct friends Friends;
 
Person p[10000];
Friends f[10000];
 
int getID(int n,char name[]){
    for(int i=0;i<n;i++){
        if(!strcmp(p[i].name,name))return p[i].id;
    }
    return 0;
}
 
int friend_check(int m,int a,int b){
    for(int i=0;i<m;i++){
        if(f[i].id1==a && f[i].id2==b || f[i].id2 ==a && f[i].id1==b)return 1;
    }
    return 0;
}
 
int main (){
    FILE *fp = fopen ("friends","rb");
    char n1[31],n2[31];
 
    int n,m;
    fread(&n,sizeof(int),1,fp);
    fread(p,sizeof(Person),n,fp);
    fread(&m,sizeof(int),1,fp);
    fread(f,sizeof(Friends),m,fp);
 
    while(scanf ("%s %s",n1,n2)==2){
        if(friend_check(m,getID(n,n1),getID(n,n2)))printf ("yes\n");
        else printf ("no\n");
    }
    return 0;
}
