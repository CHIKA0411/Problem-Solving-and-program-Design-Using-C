#include <stdio.h>

int main(){
int h;
double m;
double min;
min=m/60;
printf("Enter the hours.\n");
scanf("%d",&h);
printf("Enter the minutes.\n");
scanf("%lf",&min);
double t;
t=h+min;

float T= ((4*t*t)/t+2)-20;
printf("elasped temperature");
printf("%f",T);
}
