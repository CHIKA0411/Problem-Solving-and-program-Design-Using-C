#include <stdio.h>   
int main(){
	int size;
	printf("Enter the size of array");
	scanf("%d",&size);
	
	int productId[size];
	float price[size];
	
	for(int i=0;i< size ;i++){
		printf("enter the product ID %d \n",i+1);
		scanf("%d",&productId[i]);
		printf("enter the price %d \n",i+1);
		scanf("%f",&price[i]);
		
	}
	printf("\n Product ID \t Price \n");
	printf("--------------------------\n");
	for(int i=0;i< size ;i++){
		printf("%d\t\t%.2f\n",productId[i],price[i]);
	}
	return 0;
}
