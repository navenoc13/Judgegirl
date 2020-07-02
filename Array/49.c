#include <stdio.h>
 
int main (){
    int n,m,num;
    scanf ("%d%d",&n,&m);
    int max[m],min[m],sum[m];
    //initialize
    for(int i=0;i<m;i++)sum[i]=0;
    for(int i=0;i<m;i++)max[i]=-1;
    for(int i=0;i<m;i++)min[i]=10001;
 
    for(int i=0;i<n;i++){
        scanf ("%d",&num);
        sum[num%m]+=num;
        if(num>max[num%m])max[num%m]=num;
        if(num<min[num%m])min[num%m]=num;
    }
    for(int i=0;i<m;i++){
        printf ("%d %d %d\n",sum[i],max[i],min[i]);
    }
    return 0;
}
