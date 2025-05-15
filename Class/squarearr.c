//1.Passing Array Element as Argument

#include<stdio.h>

void printSquare(int num){
	printf("Square : %d\n",num*num);
}

int main(){	
	int arr[]={1,2,3,4,5};
	printSquare(arr[2]);
	return 0;
}
