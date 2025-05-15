#include <stdio.h>

int main(void){
	double x,y;
	int quadant;
	int category;
	printf("Enter the coordinate pf the points(x,y)");
	scanf("%lf %lf",&x,&y);
	
	if(x>0&& y>0){
		category=1;
	}
	else if(x<0&& y>0){
		category=2;
	}
	else if(x<0&& y<0){
		category=3;
	}
	else if(x>0&& y<0){
		category=4;
	}
	else if(x==0&& y==0){
		category=5;
	}
	else if(x==0){
		category=6;
	}
	else if(y==0){
		category=7;
	}
	else{
		category=8;
	}
	
	switch(category){
	case 1:
		printf("The points (%.2f,%.2f) lies in Quandant I \n",x,y);
		break;
	case 2:
		printf("The points (%.2f,%.2f) lies in Quandant II \n",x,y);
		break;
	case 3:
		printf("The points (%.2f,%.2f) lies in Quandant III\n",x,y);
		break;
	case 4:
		printf("The points (%.2f,%.2f) lies in Quandant IV \n",x,y);
		break;
	case 5:
		printf("The points (%.2f,%.2f) lies in origin \n",x,y);
		break;
	case 6:
		printf("The points (%.2f,%.2f) lies in y-axis \n",x,y);
		break;
	case 7:
		printf("The points (%.2f,%.2f) lies in x-axis \n",x,y);
		break;
	
	
	default:
		printf("Unknown\n");
	}
	return (0);
}
