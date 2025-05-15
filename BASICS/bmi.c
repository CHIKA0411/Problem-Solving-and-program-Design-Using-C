#include <stdio.h>

int main(void){
	int weight;
	double height;
	double bmi;
	int category;
	printf("Enter the weight");
	scanf("%d",&weight);
	printf("Enter the height");
	scanf("%lf",&height);
	bmi=weight/(height*height);
	printf("Your BMI is %lf : ",bmi);
	
	if(bmi<18.5){
		category=1;
	}
	else if(bmi>=18.5 && bmi<=24.9){
		category=2;
	}
	else if(bmi>=25 && bmi<=29.9){
		category=3;
	}
	else {
		category=4;
	}
	
	switch(category){
	case 1:
		printf("Underweight");
		break;
	case 2:
		printf("Normal");
		break;
	case 3:
		printf("Overweight");
		break;
	case 4:
		printf("Obese");
		break;
	default:
		printf("Unknown\n");
	}
	return (0);
}
