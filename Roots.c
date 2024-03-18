#include<stdio.h>
#include<math.h>

int main(){
	
	double a, b, c, delta, root1, root2;
	
	printf("Please enter a number for a :");
	scanf("%lf", &a);

	printf("\nPlease enter a number for b :");
	scanf("%lf", &b);
	
	printf("\nPlease enter a number for c :");
	scanf("%lf", &c);
	
	delta = (b*b)-(4*a*c);
	
	if(delta > 0){
		delta = sqrt(delta);
		root1 = (-b - delta)/(2*a);
		root2 = (-b + delta)/(2*a);
		printf("\nRoot 1 : %.5lf", root1);
		printf("\nRoot 2 : %.5lf", root2);	
	}
	else{
		printf("\nThere is not any root for this equation");
	}
		
	
	
}
