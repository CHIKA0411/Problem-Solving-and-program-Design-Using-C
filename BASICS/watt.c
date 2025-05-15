#include <stdio.h>

int main(void){
	int watt;
	printf("Enter the watts");
	scanf("%d",&watt);
	printf("Brightness is %d : ",watt);
	switch(watt){
	case 15:
		printf("%d",125);
		break;
	case 25:
		printf("%d",215);
		break;
	case 40:
		printf("%d",500);
		break;
	case 60:
		printf("%d",880);
		break;
	case 75:
		printf("%d",1000);
		break;
	case 100:
		printf("%d",1675);
		break;
	
	default:
		printf("Unknown\n");
	}
	return (0);
}
