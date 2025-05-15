#include <stdio.h>

int main(){
	int item;
	double product;
	
	printf("Enter the item\n");
	scanf("%d",&item);
	printf("Enter the product\n");
	scanf("%lf",&product);
	
	if(item>0){
	product=product*item;
	printf("%lf",product);
	}
	else{
	printf("%lf",product);
	}
	
	
	
	
}

