#include <stdio.h>

int main(){
	int x;
	int zero_count,minus_sum,plus_sum;

	printf("Enter the x\n");
	scanf("%d",&x);
  	
	
	if(x==0){
	zero_count=zero_count+1;
	printf("%d",zero_count);
	}
	else if(x<0){
	minus_sum=minus_sum+x;
	printf("%d",minus_sum);
	}
	else if(x>0){
	plus_sum=plus_sum+x;
	printf("%d",plus_sum);
	}
	
	else{
	printf("NO Value Found");
	}
	
	
	
	
}
