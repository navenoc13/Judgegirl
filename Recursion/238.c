#include<stdio.h>
 
int n,cou,ans[10000]={0};
void cal(int t,int a[],int sum){
      if(t==n){
        ans[sum]++;
           return;
      }
      cal(t+1,a,sum+a[t]);
      cal(t+1,a,sum);
}
int main(){
      scanf("%d",&n);
      int A[n];
      for(int i = 0; i < n; ++i)
        scanf("%d",&A[i]);
      cal(0,A,0);
      int k;        
      while(scanf("%d",&k)!=EOF){
        printf("%d\n",ans[k]);
    }
}
