/*
imlements a c program to print the following patternusig nested loop
 	*
   **
  ***
 ****
*****
*/
#include<stdio.h>

void main(){
	int i,j,s;
	
	for(i=1;i<=5;i++){
		for(s=4;s>=i;s--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
		
	}
}
