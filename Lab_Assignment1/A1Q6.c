#include <stdio.h>

double celsi_depth(double depth){
    return 10*depth+20;
}

double farehiet(double celcius){
    return 1.8*celcius+32;
}
int main(){
    //variables
    double depth,c,f;

    //taking user input
    printf("Enter the depth in km: ");
    scanf("%lf",&depth);


    //converting to celsius and fahrenheit
    c = celsi_depth(depth);
    f = farehiet(c);

    //printing the result
    printf("Depth in Celsius: %.2lf\n",c);
    printf("Depth in Fahrenheit: %.2lf\n",f);
    return 0;
}