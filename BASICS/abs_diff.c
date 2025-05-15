#include <stdio.h>

int main(){
	int x,y;
	int absolute_diff;

	printf("Enter the x\n");
	scanf("%d",&x);
  	printf("Enter the y\n");
	scanf("%d",&y);
	
	if(x>y){
	absolute_diff=x-y;
	printf("%d",absolute_diff);
	}
	else if(y>x){
	absolute_diff=y-x;
	printf("%d",absolute_diff);
	}
	else{
	printf("NO Value Found");
	}
	
	
	
	
}
