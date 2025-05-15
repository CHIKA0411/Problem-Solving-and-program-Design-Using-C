#include <stdio.h>
int main(){
int dot,qua,dim,nickel,penny,total_cent;
float total_dollar,charges;
char first,middle,last;
printf("Enter no. of dollar");
scanf("%d",&dot);

printf("Enter no. of qua");
scanf("%d",&qua);
printf("Enter no. of nickel");
scanf("%d",&nickel);
printf("Enter no. of dimes");
scanf("%d",&dim);
total_cent=dot*100+qua*50+15*nickel;
total_dollar=total_cent/100;
charges+total_cent %100;
 printf("Enter name initials :");
 scanf("%c  %c %c", &first, &middle, &last);
 printf("Credit coins : %c%c%c",first,last,middle);
 printf("total dollar value: %f", total_dollar);
 printf("total charges: %f",charges);
 
 }
