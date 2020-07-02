#include <stdio.h>
 
void shuffle(int *deck[]){
    int n=0;
    //find N
    while(deck[n]!=NULL)n++;
    //find half
    int half;
    if(n%2==0)half = n/2;
    else half = (n+1)/2;
    int first[5000],second[5000];
    int s=0;
    for(int i=0;i<half;i++)first[i]=*deck[i];
    for(int i=half;i<n;i++){
        second[s] = *deck[i];
        s++;
    }
    if(n%2==0){//even
        s=0;
        for(int i=0;i<n;i+=2){
            *deck[i] = first[s];
            *deck[i+1] = second[s];
            s++;
        }
    }
    else{//odd
        s=0;
        for (int i=0;i<n;i+=2){
            *deck[i] = first[s];
            if(i+1<n)*deck[i+1] = second[s];
            s++;
        }
    }
    return;
}
 
void print(int *deck[]){
    int i=0;
    while(deck[i]!=NULL){
        printf ("%d ",*deck[i]);
        i++;
    }
    return;
}
