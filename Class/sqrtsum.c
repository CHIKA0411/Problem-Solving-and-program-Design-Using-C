#include <stdio.h>
#include <math.h>
int main(){
double sum;
double a,b, sqrta,sqrtb;

printf("Enter no.");
scanf("%lf",&a);
printf("Enter no. ");
scanf("%lf",&b);

sqrta=sqrt(a);
sqrtb=sqrt(b);
sum=sqrt(a+b);


printf("a");
printf("%f",sqrta); 

printf("b");
printf("%f",sqrtb); 

printf("sum");
printf("%f",sum); 
}
