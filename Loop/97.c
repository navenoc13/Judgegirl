#include <stdio.h>
#include <stdlib.h>
 
int main (){
    int parkx[10],parky[10],c[10],sum[10]={0};
    int n,m,i,j;
    int bikex,bikey;
    int d;
    scanf ("%d",&n);
    for (i=0;i<n;i++)scanf ("%d%d%d",&parkx[i],&parky[i],&c[i]);
    scanf ("%d",&m);
    for (j=0;j<m;j++){
        scanf ("%d %d",&bikex,&bikey);
        int mindis = 200001,index=-1;
        for (i=0;i<n;i++){
            if (c[i]==0)continue;
            d = abs (bikex-parkx[i]) + abs(bikey-parky[i]);
            if (d<mindis || d==mindis && (parkx[i]<parkx[index] || (parkx[i]==parkx[index] && parky[i]<parky[index]))){
                mindis = d;
                index = i;
            }
        }
        sum[index]++;
        c[index]--;
    }
    for (i=0;i<n;i++)printf ("%d\n",sum[i]);
    return 0;
}
