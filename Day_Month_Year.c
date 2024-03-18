#include<stdio.h>

int main(){
	
	int i, x, year, month, day;
	
	printf("Please enter a number : ");
	scanf("%d", &x);
	
	year = x/365;
	month = (x-(365*year))/30 ;
	day = x-(365*(year) + 30*(month));
	
	
	printf("\n%d Year(s)", year);
	printf("\n%d Month(s)", month);
	printf("\n%d Day(s)", day);
	
	
}
