#include <stdio.h>
void swap(int *a,int *b);
int main(){
	int num1,num2;
	printf("Enter the 1st number\n");
 	scanf("%d",&num1);
 	printf("Enter the 2st number\n");
 	scanf("%d",&num2);
 	
 	printf("Before swap %d and %d \n",num1,num2);
 	
 	swap(&num1,&num2);
 	printf("After swap %d and %d\n",num1,num2);
}

void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
