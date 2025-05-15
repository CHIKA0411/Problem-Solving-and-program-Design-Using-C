//2.Increment of an array

#include<stdio.h>

void abc(int x){
	++x;
	printf("%d",x);
}

int main(){
	int arr[5]={1,3,5,7,9};
	int i;
	printf("\n Data in abc");
	for(i=0;i<5;i++)
	abc(arr[i]);
	printf("\n Data in main");
	for(i=0;i<5;i++)
	printf("%d",arr[i]);
	return 0;
}

