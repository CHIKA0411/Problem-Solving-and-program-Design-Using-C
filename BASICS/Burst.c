#include <stdio.h>
int main(){
int begin,final;
printf("Enter the beginning odometer reading\n");
scanf("%d",&begin);
printf("Enter the ending odometer reading \n");
scanf("%d",&final);
int travel=final-begin;
printf("Enter the travelled\n");
printf("%d",travel);
int reburst=travel*0.35;
printf("Enter the  reimbursement is \n");
printf("%d",reburst);

}
