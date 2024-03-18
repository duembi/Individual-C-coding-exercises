#include <stdio.h>

int main(){
	
	int x, y, z;
	
	printf("please enter 3 numbers : ");
	scanf("%d %d %d", &x, &y, &z);
	
	if(x+y>z && x+z>y && y+z>x){
		printf("You can create a triangle");
		
	}
	else{
		printf("You can not create triangle with the value !");
	}
}
