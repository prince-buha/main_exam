/*
create a c program that define fuction to check if given number is a leap or not
enter your number:-4
leap year
*/


#include<stdio.h>

void main(){
	int i,n;
	
	printf("enter your number:-");
	scanf("%d",&n);
	
	
	if( n % 4 == 0 || n % 100== 0 || n % 400 == 0){
			printf("leap year");
		}else{
			printf("not leap year");
		}
		printf("%d",n);
		n++;
		
		}

