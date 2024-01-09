/*
implements a c program that reads a senttence from a file capitalization it and write into another file
enter :-hii i am devloper
your file succesfully opened
*/

#include<stdio.h>
#include<string.h>

void main(){
	int n,i;
	FILE *p;
	
	p = fopen("exam.txt","a");
	
	printf("enter :-");
	scanf("%d",&n);
	
	if( p == NULL){
		printf("file cant open");
	}
	else{
		for(i=1;i<NULL;i++){
			fprintf(p,10,i);
		}
		printf("your file succesfully opened");
	}
}
