#include <stdio.h>
int main ()
{
    int x,y;
    int minx=10001,miny=10001,maxx=-10001,maxy=-10001;
    while (scanf ("%d %d",&x,&y)==2){
        if (x>maxx)maxx = x;
        if (x<minx)minx = x;
        if (y>maxy)maxy = y;
        if (y<miny)miny = y;
    }
    printf ("%d\n",(maxx-minx)*(maxy-miny));
    return 0;
}
