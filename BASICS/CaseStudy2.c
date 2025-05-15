#include <stdio.h>
#include <math.h>
int main(){
double x1,x2,y1,y2,z1,z2;
double dist;
printf("Enter the coordinate of two points");
printf("Enter the coordinate of first point(x,y,z)");
scanf("%lf",&x1);
scanf("%lf",&y1);
scanf("%lf",&z1);
printf("Enter the coordinate of second point(x,y,z)");
scanf("%lf",&x2);
scanf("%lf",&y2);
scanf("%lf",&z2);
dist=sqrt(pow((x1-x2),2)+pow((y1-y2),2)+pow((z1-z2),2));
printf("%lf",dist);
}
