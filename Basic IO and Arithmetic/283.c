#include <stdio.h>
 
main() {
	//num = total number of the animals (chicken, rabbit & crab)
	//legs = total sum of their legs
	//tails = total sum of their tails
    int num, legs, tails;
    //a = num of chicken
    //b = num of rabbit
    //c = num of crab
	int a,b,c;
    scanf("%d%d%d", &num, &legs, &tails);
    c = num - tails;
    b = (legs - 2*tails -8*c)/2;
    a = tails - b;
    printf ("%d\n%d\n%d\n",a,b,c);
 
    return 0;
}
