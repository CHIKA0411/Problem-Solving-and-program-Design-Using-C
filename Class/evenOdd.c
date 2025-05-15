#include <stdio.h>
int main(){
int a;

char b;

do{

 	printf("Enter a number\n");
	scanf("%d",&a);
	if(a%2==0){
		printf("Even\n");
	}
	else if(a%2!=0){
		printf("Odd\n");
	}
	else{
		printf("Invalid input\n");
	}
	printf("Do u want to check the number(y/n)\n");
	getchar();
	scanf("%c",&b);
}	


while(b=='y' || b=='Y');
printf("The program is terminated \n");
}
