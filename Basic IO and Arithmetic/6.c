#include <stdio.h>

int main (){
	//x is a 3-digit number
	int x;
	scanf ("%d",&x);
	//Print 3 digits
	printf ("%d\n",x/100);
	printf ("%d\n",(x/10)%10);
	printf ("%d\n",x%10);
	return 0;
}
