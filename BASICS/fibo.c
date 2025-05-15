#include <stdio.h>
int main(){
int n;
int i;
int sum,a,b;
a=0;
b=1;
 	printf("Enter a number\n");
	scanf("%d",&n);
	printf("fibonacci of the number\n");
	printf("%d %d ",a,b);
	for (i = 1; i <= n; i++) {
	
	sum=a+b;
	a=b;
	b=sum;
	printf("%d ",sum);
	

	}
	
}
