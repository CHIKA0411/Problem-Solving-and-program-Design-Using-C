#include <stdio.h>

int main(void){
	char class;
	printf("Enter chip serail number");
	scanf("%c",&class);
	printf("Ship class is %c : ",class);
	switch(class){
	case 'B':
	case 'b':
		printf("Battleship\n");
		break;
	case 'C':
	case 'c':
		printf("Cruiser\n");
		break;
	case 'D':
	case 'd':
		printf("Destroyer\n");
		break;
	case 'F':
	case 'f':
		printf("Frigate\n");
		break;
	default:
		printf("Unknown\n");
	}
	return (0);
}
