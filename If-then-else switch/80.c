#include <stdio.h>

int main (){
    int n;
    int x1,y1,x2,y2,x3,y3;
    scanf ("%d",&n);
    for (int i = 0;i<n;i++){
        scanf ("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
        int i = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
        int j = (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1);
        int k = (x3-x2) *(x3-x2) + (y3-y2)*(y3-y2);
 
        if (i==j || j==k || i==k)printf ("isosceles\n");
        else if (k>(i+j) || j>(i+k) || i>(j+k))printf ("obtuse\n");
        else if ((i+j)==k || (i+k)==j || (j+k)==i )printf ("right\n");
        else if (k<(i+j) || j<(i+k) || i<(j+k))printf ("acute\n");
    }
    return 0;
}
