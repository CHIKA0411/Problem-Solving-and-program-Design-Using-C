#include <stdio.h>
#include <math.h>

#define PI 3.14

int main(){
	double r,h,cost,q;
	double surface_area,unit_cost,total_cost;
	
	printf("Enter the radius\n");
	scanf("%lf",&r);
	printf("Enter the height\n");
	scanf("%lf",&h);
	printf("Enter the cost\n");
	scanf("%lf",&cost);
	printf("Enter the quantity\n");
	scanf("%lf",&q);
	
	surface_area=PI*pow(r,2)+2*PI*r*h;
	unit_cost=surface_area*cost;
	total_cost=unit_cost*q;
	
	printf("The Surface Area\n");
	printf("%lf",surface_area);
	printf("The unit cost\n");
	printf("%lf",unit_cost);
	printf("The total cost\n");
	printf("%lf",total_cost);
	
	
	}
