#include <stdio.h>

int main (){
	int a,b,c,d,e;
	scanf ("%d%d%d%d%d",&a,&b,&c,&d,&e);
	//Surface Area
	printf ("%d\n",(2*a*b + 2*a*c + 2*b*c + 4*(a-2*e)*d + 4*(c-2*e)*d + 4*(b-2*e)*d + 4*(c-2*e)*d + 4*(a-2*e)*d + 4*(b-2*e)*d));
	//Volume
	printf ("%d\n",a*b*c - 2*(d*(a-2*e)*(c-2*e)) - 2*(d*(a-2*e)*(b-2*e)) - 2*(d*(b-2*e)*(c-2*e)));
	return 0;
}
