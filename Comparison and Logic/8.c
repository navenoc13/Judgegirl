#include <stdio.h>

int main (){
    int a,b,c;
    scanf ("%d%d%d",&a,&b,&c);
    //If valid a,b,c are valid lengths of a triangle
    if ((a+b>c) && (a+c>b) && (b+c>a))printf ("1\n");
    else printf ("0\n");
}
