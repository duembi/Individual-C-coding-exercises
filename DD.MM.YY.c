#include<stdio.h>

int main(){
	
	int p, q, r, s;
	
	printf("Please enter a number for p : "); 
	scanf("%d", &p);
	
	printf("Please enter a number for q : "); 
	scanf("%d", &q);	
	
	printf("Please enter a number for r : ");
	scanf("%d", &r);	
	
	printf("Please enter a number for s : "); 
	scanf("%d", &s);	
	
	if( q > r && s > p 	&& r+s > p+q)
		printf("Correct values");
	else printf("Wrong values");	 
	
	
}
