#include<stdio.h>

int main(){
	
	int x;
	
	printf("Please enter a number : ");
	scanf("%d", &x);
	
	if(x > 80){
		printf("%d is bigger than 80", x);
	}
	else if( 80 >= x && x > 60){
		printf("%d is between 60 and 80", x);
	}
	else if( 60 >= x && x > 40){
		printf("%d is between 40 and 60", x);
	}
	else if( 40 >= x && x > 20){
		printf("%d is between 20 and 40", x);
	}
	else if( 20 >= x && x> 0){
		printf("%d is between 0 and 20", x);
	}
	else{
		printf("%d is smaller than 0", x);
	}	
}
