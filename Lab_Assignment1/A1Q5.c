#include <stdio.h>

int compute_acceleration(float u,float v,float time){
    int a=(v-u)/time;
    return a;
}
int compute_time(float u,float v,float time){
    int a=compute_acceleration(u,v,time);
    float t=u/a;
    return t;

}
int  main(){
    float initial_speed,final_speed,time_i,time_f,time_i_hour,time_i_minute,time_f_hour,time_f_minute,total_time;

    printf("Enter the initial speed (m/s): ");
    scanf("%f",&initial_speed);
    printf("Enter the final speed (m/s): ");
    scanf("%f",&final_speed);
    printf("Enter the initial time in hours: ");
    scanf("%f",&time_i_hour);
    printf("Enter the initial time in minutes: ");
    scanf("%f",&time_i_minute);
    printf("Enter the final time in hours: ");
    scanf("%f",&time_f_hour);
    printf("Enter the final time in minutes: ");
    scanf("%f",&time_f_minute);

    //calculation
    //calculation in time
    time_i=time_i_hour+time_i_minute/60;
    time_f=time_f_hour+time_f_minute/60;
    total_time=time_f-time_i;

    //calculation of acceleration
    float acceleration=compute_acceleration(initial_speed,final_speed,total_time);
    //output
    printf("The acceleration is: %f m/s^2\n",acceleration);
   
}