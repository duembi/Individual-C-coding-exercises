#include<stdio.h>

int main(){
	
	int i, x, sum = 0;
	int numbers[5];
	
	printf("Please enter 5 number : ");
	
	for(i=0; i<=4; i++){
		scanf("%d", &numbers[i]);
	}
	
	for(i=0; i<=4; i++){
		if(numbers[i]%2 != 0){
			printf("%d. number is %d\n", i+1, numbers[i]);
			sum = sum + numbers[i];
		}
	}
	printf("sum of all odd values is %d", sum);
}
