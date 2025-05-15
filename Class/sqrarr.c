#include <stdio.h>

void SquareArray(int* arr,int* sqrarr,int size){
	for(int i=0;i< size ;i++){
		sqrarr[i]=arr[i]*arr[i];
	}
}

int main(){
	int size;
	printf("Enter the size of array");
	scanf("%d",&size);

	int arr[size];
	int sqrarr[size];

	printf("enter the element \n");
	for(int i=0;i< size ;i++){
		scanf("%d",&arr[i]);
	}
	SquareArray(arr,sqrarr,size);

	printf("Squared elements \n");
	for(int i=0;i< size ;i++){
		printf("%d ",sqrarr[i]);
	}
	printf("\n ");
	return 0;
}
