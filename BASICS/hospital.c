#include <stdio.h>
int main(){
int v;
double min;
printf("Enter the volume.\n");
scanf("%d",&v);
printf("%d ml",v);
printf("Enter the min.\n");
scanf("%lf",&min);
double h=min/60;
double rate=v/h;
printf("Rate  is %lf ml/hr",rate);
}

