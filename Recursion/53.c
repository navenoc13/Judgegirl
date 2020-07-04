#include <stdio.h>
#include <stdlib.h>
 
int compare(const void *a, const void *b){
        const int *va = (const int *)a;
        const int *vb = (const int *)b;
 
        return *va-*vb;
}
 
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
 
void permutation(int arr[], int index, int n){
    int temp[n];
 
    if(index > n) return;
 
    if(index == n){
        for(int i = 0; i < n; i++){
            if(i != n-1) printf("%d ",arr[i]);
            else printf("%d",arr[i]);
        }
        printf("\n");
    }
    else{
        for(int i = index; i < n; i++){
            swap(&arr[index],&arr[i]);
            for(int j = 0; j < n; j++) temp[j] = arr[j];
            qsort(arr+index+1,n-index-1,sizeof(int),compare);
 
            permutation(arr,index+1,n);
 
            for(int j = 0; j < n; j++) arr[j] = temp[j];
            swap(&arr[index],&arr[i]);
        } 
    }
}
 
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d",&arr[i]);
    qsort(arr,n,sizeof(int),compare);
    permutation(arr,0,n);
}
