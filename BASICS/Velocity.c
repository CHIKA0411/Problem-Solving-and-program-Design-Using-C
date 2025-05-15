#include <stdio.h>
int main(){
int p2,p1,t2,t1;
printf("Enter start path \n");
scanf("%d",&p1);
printf("Enter final path \n");
scanf("%d",&p2);
printf("Enter start time \n");
scanf("%d",&t1);
printf("Enter final time \n");
scanf("%d",&t2);

int v=((p2-p1)/(t2-t1));
printf(" velocity ");
printf("%d",v);

}

