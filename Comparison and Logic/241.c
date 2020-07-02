#include <stdio.h>

int main (){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    scanf ("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    
	if (x1*y2-x2*y1>0 && x2*y3 - y2*x3 > 0 && x3*y4 - y3*x4 >0 && x4 *y1 - y4*x1 >0)printf ("1\n");
    else printf ("0\n");
}
