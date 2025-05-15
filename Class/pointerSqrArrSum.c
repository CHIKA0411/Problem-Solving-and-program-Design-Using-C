/* 3.WAP in C to findout square sum of of first 5 elements of array using call by value.UsingPointer
arr[]={12,15,23,28,41,45,53,62,68,73}.*/

#include<stdio.h>
void abc(int *x){
	int a;
	a=*x;
	*x=a*a;
	printf("%d",*x);
}

int main(){
	int arr[5]={1,3,5,7,9};
	int i;
	printf("\n Data in abc");
	for(i=0;i<5;i++)
	abc(&arr[i]);
	printf("\n Data in main");
	for(i=0;i<5;i++)
	printf("%d",arr[i]);
	return 0;

}
