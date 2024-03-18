#include<stdio.h>

int  main(){
	
	int p, q, r, s;
	
	printf("Please enter an even number for p : ");
	scanf("%d", &p);
	
	printf("Please enter a positive number for p : ");
	scanf("%d", &q);
	
	printf("Please enter a positive number for p : ");
	scanf("%d", &r);		
	
	printf("Please enter a positive number for p : ");
	scanf("%d", &s);
	
	if(q>r && r>s && r+s > q+p){
		printf("Correct values");
	}
	else{
		printf("Wrong values");
	}
		
}
