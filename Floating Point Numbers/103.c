#include <stdio.h>
 
int main (){
    int n;
    scanf ("%d",&n);
    double arr[16][16],x[16],y[16];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf ("%lf",&arr[i][j]);
    for(int i=0;i<n;i++)scanf ("%lf",&y[i]);
    //Backward Substitution
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=i;j--){
            if(i!=j)y[i] = y[i] - arr[i][j]*x[j];
            else x[i] = y[i]/arr[i][i];
        }
    }
    for(int i=0;i<n;i++)printf ("%f\n",x[i]);
    return 0;
}
