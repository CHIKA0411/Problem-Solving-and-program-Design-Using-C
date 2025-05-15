#include <stdio.h>

#define PI 3.14

int main(){


double weight;
double rim_area,thickness,density;


printf("Enter no. of thickness");
scanf("%lf",&thickness);
printf("Enter no. of density");
scanf("%lf",&density);

double edge_diameter,hole_diameter;

printf("Enter no. of edge_diameter");
scanf("%lf",&edge_diameter);
printf("Enter no. of hole_diameter");
scanf("%lf",&hole_diameter);

double unit_weight,quantity;
printf("Enter no. of quantity");
scanf("%lf",&quantity);
rim_area=(PI*((edge_diameter/2)*(edge_diameter/2)))-(PI*(hole_diameter/2)*(hole_diameter/2));
unit_weight=rim_area*thickness*density;
weight=unit_weight*quantity;

printf("weight");
printf("%f",weight);

}
