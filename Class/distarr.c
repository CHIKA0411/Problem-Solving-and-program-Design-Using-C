#include <stdio.h>
#include <math.h>

void calDist(int * x,int* y,float* distances, int size){
	for(int i=0;i<size-1;i++){
	int dx=x[i+1]-x[i];
	int dy=y[i+1]-y[i];
	distances[i]=sqrt(dx*dx+dy*dy);
	
	}
}
int main(){
	int size;
	printf("Enter the size of array");
	scanf("%d",&size);
	
	int x[size],y[size];
	float distances[size-1];
	
	printf("Enter the x and y coordinate of the points :\n");
	for(int i=0;i< size ;i++){
		printf("Point x-axis %d \n",i+1);
		scanf("%d",&x[i]);
		printf("Point y-axis %d \n",i+1);
		scanf("%d",&y[i]);
		
	}
	calDist(x,y,distances,size);
	printf("\n Distance between the consecutivepoints: \n");
	for(int i=0;i< size ;i++){
		printf("Distance between points(%d -%d):%.2f\n",i+1,i+2,distances[i]);
	}
	return 0;
	
}
