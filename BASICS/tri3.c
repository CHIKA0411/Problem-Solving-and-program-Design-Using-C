#include <stdio.h>
#include <math.h>

#define PI 3.14
int main(){
double a ,b, c , alpha;
printf("Enter the two length\n");
scanf("%lf",&b);
scanf("%lf",&c);
printf("Enter the angle\n");
scanf("%lf",&alpha);

double angle=alpha*PI/180;
a =sqrt(pow(b,2)+pow(c,2)-2*b*c*cos(angle));
printf("The length\n");
printf("%lf",a);
}
