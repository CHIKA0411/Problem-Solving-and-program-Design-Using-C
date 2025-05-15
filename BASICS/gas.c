#include <stdio.h>

int main(void){
	char color;
	printf("Enter the color ");
	scanf("%c",&color);
	printf("Compressed gas  is %c : ",color);
	switch(color){
	case 'O':
	case 'o':
		printf("Ammonia\n");
		break;
	case 'B':
	case 'b':
		printf("Carbon monooxide\n");
		break;
	case 'Y':
	case 'y':
		printf("Hydrogen\n");
		break;
	case 'G':
	case 'g':
		printf("Oxygen\n");
		break;
	default:
		printf("Unknown\n");
	}
	return (0);
}
