#include<stdio.h>

#define GRAVITY 9.80 // gravitational constant in meters/second^2
#define EFFICIENCY 0.90 // efficiency constant (90% conversion to electrical energy)
#define DENSITY 1000 // density of water in kg/m^3

int main() {
    double height, flow_rate, mass, work, power;

    printf("HYDROELECTRIC DAM POWER CALCULATOR\n");
    printf("Enter the height of the dam (in meters): ");
    scanf("%lf", &height);
    printf("Enter the flow rate of water (in cubic meters per second): ");
    scanf("%lf", &flow_rate);

    // calculate the mass of water
    mass = flow_rate * DENSITY;

    // calculate the work done by gravity
    work = mass * GRAVITY * height;

    // calculate the power produced
    power = work * EFFICIENCY;

    // convert power from Watts to Megawatts
    power /= 1e6;

    printf("The hydroelectric dam will produce approximately %.2f MW of power.\n", power);

    return 0;
}