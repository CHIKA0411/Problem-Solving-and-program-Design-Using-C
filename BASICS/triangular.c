#include <stdio.h>
#include <tgmath.h>
int main(){
int m,n;
printf("Enter the no.\n");
scanf("%d",&m);
printf("Enter the no.\n");
scanf("%d",&n);
int side1=m*m-n*n;
int side2=2*m*n;
int h=m*m+n*n;
int side=side1+side2;
if(side==h){
	printf("pythagoras pair");
	
}
else{
	printf("not a pythagoras pair");
}
}
