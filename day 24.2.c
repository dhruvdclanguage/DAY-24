#include<stdio.h>

void cube (int a) {
	
	if(a%15==0){
		printf("\ngiven nmber is divisible by 3 & 5 both ");
	}
	else{
		printf("\ngiven nmber is not divisible by 3 & 5 both");
	}
	
}


int main (){
	int y;
	
	printf("Enter value is: ");
	scanf("%d",&y);
	
	cube(y);
	
	
	return 0;
}
