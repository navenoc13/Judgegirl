#include <stdio.h>

int main (){
	int x;
	scanf ("%d",&x);
	//Output 0, If x meet these 3 conditions: 
	/*
	1. Multiple of 3
	2. Multiple of 5
	3. Not multiple of 7
	*/
	//Else Output 1
	if (x%3==0 && x%5==0 && x%7!=0)printf ("0\n");
	else printf ("1\n");
	return 0;
}
