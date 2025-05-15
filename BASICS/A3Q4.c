#include <stdio.h>

void displayDivisble(int n){
	int sum_of_digit=0;
	int original_no=n;
	
	while(n>0){
		int digit=n%10;
		sum_of_digit+=digit;
		n=n/10;
	}
	if(sum_of_digit%9==0){
		printf("The sum of digit %d of the number %d is divible by 9 \n",sum_of_digit,original_no);
	}
	else{
		printf("The sum of digit %d of the number %d is  not divible by 9 \n",sum_of_digit,original_no);
	}

}
void main(){
	int num;
	printf("Enter a num \n");
	scanf("%d",&num);
	
	displayDivisble(num);
}
