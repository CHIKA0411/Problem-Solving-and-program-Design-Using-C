#include <stdio.h>

void main(){
	
	int smallest,largest,average;
	int num;
	
	average=0;
	
	printf("Enter the digits in the array \n");
	scanf("%d",&num);
	printf("enter the digit \n ");
	
	int n[num];
	
	for(int i=1;i<=num;i++){
	
		scanf("%d",&n[i]);
		average+=n[i];
	}
	for(int i=1;i<=num;i++){
		if(i==0){
			smallest=largest=n[i];
		
		}
		else{
			if(n[i]<smallest){
				smallest=n[i];
		}
		  	if(n[i]>largest){
			 	largest=n[i];
		}
		
		}
	}
	average/=num;
	printf("smallest value %d \n",smallest);
	printf("largest value %d \n",largest);
	printf("Average value %d \n",average);
	

}
