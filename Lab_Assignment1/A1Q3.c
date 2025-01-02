#include <stdio.h>

int main(){
    // variables
    double takeoff_speed_km,distance,takeoff_speed_ms,acceleration,time;

    //input parameters
    printf("Enter the takeoff speed in km/h: ");
    scanf("%lf",&takeoff_speed_km);
    
    printf("Enter the distance in meters: ");
    scanf("%lf",&distance);

    //calculations

    //1. Convert km/h to m/s
    takeoff_speed_ms = takeoff_speed_km * 1000.0 / 3600.0;
    //2.acceleration
    acceleration = takeoff_speed_ms * 2.0 / distance;
    //3. Time
    time = distance / takeoff_speed_ms;

    //output results
    printf("The acceleration is %.2f m/s^2\n", acceleration);
    printf("The time is %.2f seconds\n", time);

}