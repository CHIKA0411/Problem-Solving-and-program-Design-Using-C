#include <stdio.h>
int main(){
	float meters;
	printf("Enter the distance in meters:");
	scanf("%f",&meters);
	float km=meters*0.001;
	float cm=meters*100;
	float mm=meters*1000;
	float feet=meters*3.28084;
	float inches=meters*39.3701;
	
	printf("Conversion Table");
	printf("----------------------\n");
	printf("| UNIT       |VALUE    |");
	printf("|meters      |%.2f \n  |",meters);
	printf("|kilometers  |%.2f \n  |" ,km);
	printf("|centimeters | %.2f \n |",cm);
	printf("|millimeters |%.2f \n  |",mm);
	printf("|feet        |%.2f\n   |",feet);
	printf("|inches      |%.2f\n   |",inches);
	printf("------------------------\n");
	
}
