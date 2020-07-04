#include<stdio.h>
int found = 0;
int make_lotion(int D, int a, int b, int c, int A, int B, int C, int power)
{
//        printf("power=%d\n", power);
    if(a < 0 || b < 0 || c < 0){
        return 0;
    }
    if(power < 0)
        return 0;
    if(power == D){
        found = 1;
        return 1;
    }
    if(power > D){
        return 0;
    }
 
    if(make_lotion(D, a-1, b, c, A, B, C, power + A))
        return 1;
    if(make_lotion(D, a, b-1, c, A, B, C, power + B))
        return 1;
    if(make_lotion(D, a, b, c-1, A, B, C, power + C))
        return 1;
    return 0;
}
int main()
{
    int N;
    scanf("%d", &N);
    for(int n = 0; n < N; n ++){
        int D, a, b, c, A, B, C;
        scanf("%d%d%d%d%d%d%d", &D, &a, &b, &c, &A, &B, &C);
        found = 0;
        make_lotion(D, a, b, c, A, B, C, 0);
        if(found == 0)
            printf("no\n");
        else if(found == 1)
            printf("yes\n");
    }
}
