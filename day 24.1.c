#include<stdio.h>

void cube (int a) {
	
	printf("Enter your Value : %d",a*a*a);
	
}


int main (){
	int y;
	
	printf("Enter value is: ");
	scanf("%d",&y);
	
	cube(y);
	
	
	return 0;
}
