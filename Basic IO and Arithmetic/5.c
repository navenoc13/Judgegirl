#include <stdio.h>

//Surface Area & Volume of Cuboid
int main (){
	int h,w,d;
	scanf ("%d%d%d",&h,&w,&d);
	//Surface Area
	printf ("%d\n",(2*h*w)+(2*h*d)+(2*w*d));
	//Volume
	printf ("%d\n",w*h*d);
	return 0;
}
