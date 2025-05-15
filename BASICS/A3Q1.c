#include <stdio.h>
int main(){
int n;
int i;
int mul;
mul=1;
 	printf("Enter a number\n");
	scanf("%d",&n);
	printf("factorial of the number\n");
	for (i = 1; i <= n; i++) {
	mul=mul*i;
	

	}
	printf("%d",mul);
}
