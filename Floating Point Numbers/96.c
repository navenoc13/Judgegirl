#include <stdio.h>
 
int main (){
    double a,b,c;
    double pi = 3.1415926;
    scanf ("%lf %lf %lf",&a,&b,&c);
    double area = 0.75 * pi * c *c;
    if(c>a){
        area+= 0.25 *pi * (c-a) * (c-a);
    }
    if(c>b){
        area+= 0.25 * pi * (c-b) * (c-b);
    }
    printf ("%f\n",area);
    return 0;
}
