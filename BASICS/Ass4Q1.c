#include <stdio.h>
void dispenseMoney(int amount,int *five,int *two,int*ones){
	*five=amount/50;
	amount%=50;
	
	*two=amount/20;
	amount%=20;
	
	*ones=amount/10;
	
	
}
int main(){
	int amount;
	int five=0,two=0,ones=0;
	
	printf("Enter the amount to dispense (multiple of 10): ");
	scanf("%d",&amount);
	if(amount%=10){
	   printf("Amount  must be a  multiple of 10.\n");
	}
	else{
	 dispenseMoney(amount,&five,&two,&ones);
	 printf("Dispensed bills : \n");
	 printf("50s : %d \n",five);
	 printf("20s : %d \n",two);
	 printf("10s : %d \n",ones);
	}
}
