#include <stdio.h>

int main (){
	int n,i;
	int j=0,k=0;
	scanf ("%d",&n);
	int num,odd[n],even[n];
	for (i = 0;i<n;i++){
      	scanf ("%d",&num);
      	if (num%2==1){
        	odd[j]=num;
        	j++;
    	}
    	if (num%2==0){
        	even[k]=num;
          	k++;
    	}
  	}
  	for (int i=0;i<j;i++){
    	printf ("%d",odd[i]);
    	if (i<j-1)printf (" ");
    	if (i==j-1)printf ("\n");
  	}
  	for (int i=0;i<k;i++){
    	printf ("%d",even[i]);
    	if (i<k-1)printf (" ");
  	}	
  	return 0;
}
